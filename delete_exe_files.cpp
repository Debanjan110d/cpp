#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

#ifdef _WIN32
#include <windows.h>
#include <direct.h>
#define getCurrentDir _getcwd
#else
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#define getCurrentDir getcwd
#endif

void findExeFiles(const std::string &directory, std::vector<std::string> &exeFiles)
{
#ifdef _WIN32
    WIN32_FIND_DATAA findFileData;
    HANDLE hFind;

    std::string searchPath = directory + "\\*";
    hFind = FindFirstFileA(searchPath.c_str(), &findFileData);

    if (hFind == INVALID_HANDLE_VALUE)
    {
        return;
    }

    do
    {
        std::string fileName = findFileData.cFileName;
        std::string fullPath = directory + "\\" + fileName;

        if (fileName != "." && fileName != "..")
        {
            if (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
            {
                // Recursively search subdirectories
                findExeFiles(fullPath, exeFiles);
            }
            else
            {
                // Check if file has .exe extension
                if (fileName.length() >= 4 &&
                    fileName.substr(fileName.length() - 4) == ".exe")
                {
                    exeFiles.push_back(fullPath);
                }
            }
        }
    } while (FindNextFileA(hFind, &findFileData) != 0);

    FindClose(hFind);
#endif
}

int main()
{
    try
    {
        char currentPath[FILENAME_MAX];
        if (!getCurrentDir(currentPath, sizeof(currentPath)))
        {
            std::cerr << "Error getting current directory!" << std::endl;
            return 1;
        }

        std::cout << "Searching for .exe files in: " << currentPath << std::endl;

        std::vector<std::string> exeFiles;

        // Search for .exe files recursively
        findExeFiles(std::string(currentPath), exeFiles);

        if (exeFiles.empty())
        {
            std::cout << "No .exe files found." << std::endl;
            return 0;
        }

        // Display found .exe files
        std::cout << "\nFound " << exeFiles.size() << " .exe file(s):" << std::endl;
        for (const auto &file : exeFiles)
        {
            std::cout << "  " << file << std::endl;
        }

        // Ask for confirmation
        std::cout << "\nDo you want to delete all these .exe files? (y/N): ";
        char choice;
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            int deletedCount = 0;
            int errorCount = 0;

            for (const auto &file : exeFiles)
            {
                try
                {
                    if (remove(file.c_str()) == 0)
                    {
                        std::cout << "Deleted: " << file << std::endl;
                        deletedCount++;
                    }
                    else
                    {
                        std::cout << "Failed to delete: " << file << std::endl;
                        errorCount++;
                    }
                }
                catch (const std::exception &e)
                {
                    std::cout << "Error deleting " << file << ": " << e.what() << std::endl;
                    errorCount++;
                }
            }

            std::cout << "\nOperation completed:" << std::endl;
            std::cout << "  Deleted: " << deletedCount << " file(s)" << std::endl;
            std::cout << "  Errors: " << errorCount << " file(s)" << std::endl;
        }
        else
        {
            std::cout << "Operation cancelled." << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    std::cout << "\nPress Enter to exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

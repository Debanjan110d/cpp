@echo off
echo Compiling delete_exe_files.cpp...
g++ delete_exe_files.cpp -o delete_exe_files.exe

if %errorlevel% equ 0 (
    echo Compilation successful!
    echo Running the program...
    echo.
    delete_exe_files.exe
) else (
    echo Compilation failed!
    pause
)

#include <iostream>

using namespace std;

int main()
{
    string userTea;
    int userTeaQuantity;

    cout << "Enter your favourite tea: \n";
    getline(cin, userTea);

    cout << "Enter your tea quantity: \n";
    cin >> userTeaQuantity;

    cout << "Your favourite tea is: " << userTea << endl;
    cout << "Your tea quantity is: " << userTeaQuantity << " packets" << endl;

    return 0;
}
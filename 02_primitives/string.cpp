#include <iostream>
#include <string>

using namespace std;

int main()
{
    string favourite_tea = "Earl Grey\n";
    string description = "Earl Grey is a \"black tea\" that is made by steeping black tea leaves in hot water for a long time.";
    cout << favourite_tea << endl;
    cout << description << endl;
    // In one line we acan do this
    cout << "\n";
    cout << favourite_tea << description << endl;
    return 0;
}
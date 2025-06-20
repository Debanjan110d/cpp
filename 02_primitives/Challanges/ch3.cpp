#include <iostream>
#include <string>

using namespace std;

int main()
{
    string favouriteTea;
    int numberOfCups;

    cout << "What's your favourite tea? ";
    getline(cin, favouriteTea);

    cout << "How many cups of tea would you like? ";
    cin >> numberOfCups;

    cout << "Ah, " << numberOfCups << " cups of " << favouriteTea << "! That's a tea-riffic choice!" << endl;

    return 0;
}

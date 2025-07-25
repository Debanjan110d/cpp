#include <iostream>

using namespace std;

int main()
{
    int cups;
    cout << "Enter the number of cups of tea you want to buy: \n";
    cin >> cups;
    if (cups < 10)
    {
        cout << "Thanks for purchasing " << cups << " cups of tea\n";
        cout << "You will get The Bronze Baze as The Enblem\n";
        /* code */
    }
    else if (cups >= 10 && cups < 20)
    {
        cout << "Thanks for purchasing " << cups << " cups of tea\n";
        cout << "You will get The Silver Baze as The Enblem\n";
        /* code */
    }
    else if (cups >= 20)
    {
        cout << "Thanks for purchasing " << cups << " cups of tea\n";
        cout << "You will get The Gold Baze as The Enblem\n";
        /* code */
    }
    else
    {
        cout << "Thanks for purchasing " << cups << " cups of tea\n";

        /* code */
    }

    return 0;
}
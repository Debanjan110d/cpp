#include <iostream>

using namespace std;

int main()
{
    int cups;
    double price_per_cup, total_price, discounted_price;
    cout << "Enter the number of cups of tea:";

    cin >> cups;
    cout << "Enter the price per cup of tea:";
    cin >> price_per_cup;

    total_price = cups * price_per_cup;

    // apply 10% discousnt if the total price is over 100
    if (total_price > 100)
    {
        discounted_price = total_price * 0.9; // means 90/100
    }
    else
    {
        discounted_price = total_price;
    }

    cout << "The Final Price is : " << discounted_price << " for " << cups << " cups of tea" << endl;

    return 0;
}
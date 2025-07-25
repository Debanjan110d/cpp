#include <iostream>

using namespace std;

int main()
{
    int cup_count;
    bool isstudent;
    cout << "Enter the number of cups of tea you want to buy: \n";
    cin >> cup_count;
    cout << "Are you a student? \n";
    cin >> isstudent;
    if (cup_count > 10 || isstudent)
    {
        cout << "Thanks for purchasing " << cup_count << " cups of tea\n";
        double total_price = cup_count * 2.5;
        double discounted_price = total_price * 0.7;
        cout << "You will get 30% dicount on total price. Your total price is: " << discounted_price << endl;
    }
    else
    {
        double total_price = cup_count * 2.5;
        cout << "Your total price is: " << total_price << endl;
    }
    return 0;
}

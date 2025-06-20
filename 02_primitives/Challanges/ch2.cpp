#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Tea Market

    int types_of_tea;
    string tea_name;
    float tea_price_per_kilogram;

    cout << "Enter the number of types of tea: ";
    cin >> types_of_tea;

    cout << "Enter the name of the tea: ";
    cin >> tea_name;

    cout << "Enter the price of the tea per kg: \n";
    cin >> tea_price_per_kilogram;
    double tea_final_price = (double)tea_price_per_kilogram * 90 / 100;
    cout << "The number of types of tea is: " << types_of_tea << endl;
    cout << "The name of the tea is: " << tea_name << endl;
    cout << "The price of the tea per kg is: " << tea_price_per_kilogram << endl;
    cout << "The final price of the tea per kg after 10% discount is: " << tea_final_price << endl;
    return 0;
}
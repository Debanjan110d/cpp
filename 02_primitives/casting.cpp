#include <iostream>

using namespace std;

int main()
{
    // Declare and initialize a float variable to hold the price of tea
    float tea_price = 10.5456;

    // Declare and initialize an int variable to hold the rounded price of tea
    int rounded_tea_price = (int)tea_price;

    // Declare and initialize an int variable to hold the quantity of tea
    int tea_quantity = 50;

    // Declare and initialize a float variable to hold the total price of tea
    float total_price = tea_quantity * tea_price;

    // Print the original price of tea
    cout << "Original price of tea: " << tea_price << endl;

    // Print the rounded price of tea
    cout << "Rounded price of tea: " << rounded_tea_price << endl;

    // Print the total price of tea
    cout << "Total price of tea: " << total_price << endl;

    return 0;
}

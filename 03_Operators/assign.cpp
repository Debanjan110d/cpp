#include <iostream>

using namespace std;

int main()
{
    int user_input, tea_bags;

    cout << "Enter the number of tea bags you want to buy: \n";
    cin >> user_input;
    tea_bags = 10;
    if (user_input > 10)
    {
        tea_bags = user_input;
        cout << "Thanks for purchasing " << tea_bags << " tea bags\n";
    }
    else
    {
        tea_bags = user_input + 5;
        cout << "5 tea bags will be added to your order in case you neede more storage to carry\n";
        cout << "Thanks for purchasing " << tea_bags << " tea bags\n";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    // unsigned can never be negative, so -10 is converted to the max value of unsigned
    unsigned small_tea_package = -10;
    // 10 is a valid unsigned value
    unsigned small_tea_package1 = 10;

    long largeTeaStorage =100000;

    //Printing the values
    cout << "small_tea_package: " << small_tea_package << endl;
    cout << "small_tea_package1: " << small_tea_package1 << endl;
    return 0;
}
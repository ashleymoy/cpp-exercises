#include <iostream>
#include <cmath> // includes pow function

using std::cout;
using std::cin;

int main ()
{
    int base, exponent;
    cout << "What is the base? ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;
    double answer = pow(base, exponent);
    cout << base  << " to the " << exponent << " power is " << answer << std::endl;
}
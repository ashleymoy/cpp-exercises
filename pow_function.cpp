#include <iostream>
#include <cmath> // includes pow function

using std::cout;
using std::cin;

double power(double base, int exponent) // power (exponent) function
{
    double result = 1;
    for(int i = 0; i < exponent; i++) // min range; max range; increment
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    double answer = power(base, exponent);
    cout << base  << " to the " << exponent << " power is " << answer << std::endl;
}

int main ()
{
    double base;
    int exponent;
    cout << "What is the base? ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;
    print_pow(base, exponent);
}
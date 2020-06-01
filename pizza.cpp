#include <iostream> // also declare functions here in the header

using std::cout;
using std::cin;

int main() // must have main function
{
    int slices; // declare variable
    cout << "How many slices of pizza do you eat?\n";
    cin >> slices;
    cout << "You have " << slices << " slices of pizza." << std::endl;
    return 0;
}
// WAP IN C++ TO FIND THE POWER OF GIVEN NUMBER USING RECURSION
#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll no:" << endl;
    cin >> roll_no;
    cout << "Enter your name:" << endl;
    cin >> name;
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base * calculatePower(base, powerRaised - 1));
    else
        return 1;
}
// WAP IN C++ TO FIND THE FACTORIAL OF GIVEN NUMBER USING RECURSION
#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll no:" << endl;
    cin >> roll_no;
    cout << "Enter your name:" << endl;
    cin >> name;

    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

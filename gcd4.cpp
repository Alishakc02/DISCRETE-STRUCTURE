// A C++ PROGRAM TO FIND GCD BETWEEN TWO NUMBERS.
#include <iostream>
#include <string>
using namespace std;
void GCD(int num1, int num2)
{
    int q, r, r1, r2;
    r1 = num1;
    r2 = num2;
    while (r2 != 0)
    {
        r = r1 % r2;
        q = r1 / r2;
        r1 = r2;
        r2 = r;
    }
    cout << "The GCD of" << num1 << "and" << num2 << "is:" << r1 << endl;
    if (r1 == 1)
    {
        cout << num1 << "and" << num2 << "are relatively prime numbers" << endl;
    }
    else
    {
        cout << num1 << "and" << num2 << "are not  relatively prime numbers" << endl;
    }
}
int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll number:";
    cin >> roll_no;
    cout << "Enter your name:";
    cin >> name;
    int num1, num2, i;
    cout << "Enter any two numbers:" << endl;
    cin >> num1 >> num2;
    GCD(num1, num2);
    return 0;
}
/* A C++program to  read the values of 'a' and 'b' from user and express them in terms of
linear combination ax + by = gcd(a, b) using extended Euclidean algorithm.Display the
 multiplicative inverse if it exists.*/
#include <iostream>
#include <string>
using namespace std;
void multiInverse(int num1, int num2, int r1)
{
    int i = 0, mod;
    while (mod != 0)
    {
        mod = (num1 * i) % num2;
        if (mod == r1)
        {
            cout << "Multiplicative inverse of" << num1 << "in mod" << num2 << "is" << i << endl;
        }
        i++;
    }
}
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
    cout << num1 << "x+" << num2 << "y=" << r1 << endl;
    multiInverse(num1, num2, r1);
}
int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll number:";
    cin >> roll_no;
    cout << "Enter your name:";
    cin >> name;
    int num1, num2;
    cout << "Enter any two numbers:" << endl;
    cin >> num1 >> num2;
    GCD(num1, num2);
    return 0;
}

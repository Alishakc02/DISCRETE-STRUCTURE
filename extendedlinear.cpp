// WAP IN C++ TO FIND THE MULTIPLICATIVE INVERSE USING EXTENDED EUCLIDEAN ALGORITHM
#include <iostream>
using namespace std;

int extendedEuclidean(int a, int b, int &x, int &y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }

    int x1, y1;
    int gcd = extendedEuclidean(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return gcd;
}

int main()
{
    int a, b;
    cout << "Enter two numbers 'a' and 'b': ";
    cin >> a >> b;

    int x, y;
    int gcd = extendedEuclidean(a, b, x, y);

    cout << "The linear combination of " << a << " and " << b << " is: " << a << " * " << x << " + " << b << " * " << y << " = " << gcd << endl;

    if (gcd == 1)
    {

        if (x < 0)
        {
            x += b;
        }
        cout << "The multiplicative inverse of " << a << " mod " << b << " is: " << x << endl;
    }
    else
    {
        cout << "Multiplicative inverse does not exist because gcd(" << a << ", " << b << ") is not 1." << endl;
    }

    return 0;
}
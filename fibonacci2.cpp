// WAP IN C++  TO FIND THE FIBONACCI SERIES UPTO USER DEFINED NUMBER USING C++
#include <iostream>
using namespace std;
int fib(int x)
{
    if ((x == 1) || (x == 0))
    {
        return (x);
    }
    else
    {
        return (fib(x - 1) + fib(x - 2));
    }
}
int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll no:" << endl;
    cin >> roll_no;
    cout << "Enter your name:" << endl;
    cin >> name;
    int x, i = 0;
    cout << "Enter the number of terms of series : ";
    cin >> x;
    cout << "\nFibonnaci Series : ";
    while (i < x)
    {
        cout << " " << fib(i);
        i++;
    }
    return 0;
}

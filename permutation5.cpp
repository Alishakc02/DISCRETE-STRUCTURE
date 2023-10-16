// WAP IN C++ TO FIND THE PERMUTATION OF GIVEN NUMBER USING C++
#include <iostream>

using namespace std;

int findFact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial *= i;

    return factorial;
}

int findNpR(int n, int r)
{
    return findFact(n) / findFact(n - r);
}
int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll no:" << endl;
    cin >> roll_no;
    cout << "Enter your name:" << endl;
    cin >> name;
    int n, r, nPr;

    cout << "Enter the value of n:" << endl;
    cin >> n;

    cout << "Enter the value of r:" << endl;
    cin >> r;

    nPr = findNpR(n, r);

    cout << "Permutation,nPr : " << nPr << endl;
    return 0;
}
// WAP IN C++ TO FIND THE COMBINATION  OF THE GIVEN NUMBER USING RECURSION
#include <iostream>

using namespace std;

int findFact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial *= i;

    return factorial;
}

int findNcR(int n, int r)
{
    return findFact(n) / (findFact(n - r) * findFact(r));
}
int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll no:" << endl;
    cin >> roll_no;
    cout << "Enter your name:" << endl;
    cin >> name;
    int n, r, nCr;

    cout << "Enter the value of n:" << endl;
    cin >> n;

    cout << "Enter the value of r:" << endl;
    cin >> r;

    nCr = findNcR(n, r);
    cout << "Combination,nCr : " << nCr << endl;
    return 0;
}
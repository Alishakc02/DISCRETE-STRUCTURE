// A C++ PROGRAM TO CHECK WHETHER THE ENTERED NUMBER IS PRIME OR NOT.
#include <iostream>
using namespace std;
int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll number:";
    cin >> roll_no;
    cout << "Enter your name:";
    cin >> name;
    int num, i, chk = 0;
    cout << "Enter a Number: ";
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            chk++;
            break;
        }
    }
    if (chk == 0)
        cout << "\nIt is a Prime Number";
    else
        cout << "\nIt is not a Prime Number";

    return 0;
}
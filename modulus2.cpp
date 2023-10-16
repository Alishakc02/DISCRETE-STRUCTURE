// WAP to read the value of a and b from user and calculate a mod b in C++  
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

    int a, b, result;
    cout << "Enter the value of a and b:" << endl;
    cin >> a >> b;
    result = a % b;
    cout << "The value of result is:" << result << endl;
    return 0;
}
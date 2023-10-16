// A C++ PROGRAM TO READ TWO SETS FROM USER AND DISPLAY THEIR CARTESIAN PRODUCT

#include <stdio.h>
#include <iostream>
using namespace std;
void findCart(int arr1[], int arr2[], int n, int n1)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n1; j++)
            printf("{%d, %d}, ", arr1[i], arr2[j]);
}

int main()
{
    int roll_no;
    string name;
    cout << "Enter your roll number:";
    cin >> roll_no;
    cout << "Enter your name:";
    cin >> name;

    int arr1[] = {1, 2, 3}; // first set
    int arr2[] = {4, 5, 6}; // second set
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findCart(arr1, arr2, n1, n2);
    return 0;
}

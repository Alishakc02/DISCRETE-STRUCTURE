/* Write a program to read two Boolean matrices from the user and display its join, meet
and Boolean product.*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n, p, q, k, sum = 0;
    int first[5][5], second[5][5], multiply[5][5];
    cout << "Enter the row and columns of first matrix:" << endl;
    cin >> m >> n;
    cout << "Enter elements of first matrix:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> first[i][j];
        }
    }
    cout << "Enter the row and columns of second matrix:" << endl;
    cin >> p >> q;

    if (n != p)
    {
        cout << "Matrices can't be multiplied:" << endl;
    }
    else
    {
        cout << "Enter elements of second matrix:" << endl;
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                cin >> second[i][j];
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < p; k++)
            {
                sum = sum || first[i][j] && second[i][j];
            }
            multiply[i][j] = sum;
            sum = 0;
        }
    }
    cout << "Boolean product of the matrices is:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            cout << multiply[i][j] << endl;
        }
    }

    return 0;
}

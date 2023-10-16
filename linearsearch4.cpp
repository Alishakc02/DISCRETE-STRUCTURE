// WAP IN C++ TO PERFORM LINEAR SEARCH USING RECURSION
#include <iostream>
using namespace std;

int recursiveLinearSearch(int array[], int key, int size)
{
    size = size - 1;
    if (size < 0)
    {
        return -1;
    }
    else if (array[size] == key)
    {
        return 1;
    }
    else
    {
        return recursiveLinearSearch(array, key, size);
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
    int size;
    cout << "\nEnter Size Of Array :: ";
    cin >> size;
    int array[size], key, i;

    for (int j = 0; j < size; j++)
    {
        cout << "\nEnter [ " << j << " ] Element :: ";
        cin >> array[j];
    }

    cout << "\nThe Array entered is :: \n\n";

    for (int a = 0; a < size; a++)
    {
        cout << "Arr[ " << a << " ]  =  ";
        cout << array[a] << endl;
    }

    cout << "\nEnter any Key To Search in Array :: ";
    cin >> key;
    int result;

    result = recursiveLinearSearch(array, key, size--);

    if (result == 1)
    {
        cout << "\nKey Found in Array .\n ";
    }
    else
    {
        cout << "\nKey NOT Found in Array .\n ";
    }
    return 0;
}
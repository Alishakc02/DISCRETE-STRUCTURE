#include <iostream>
#include <string>
using namespace std;
void findDifference(int set1[], int size1, int set2[], int size2)
{
    cout << "Difference between sets is:" << endl;
    for (int i = 0; i < size1; i++)
    {
        bool found = false;
        for (int j = 0; j < size2; j++)
        {
            if (set1[i] == set2[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << set1[i] << " " << endl;
        }
    }
}
int main()
{
    string name;
    int roll, labno;
    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Enter your roll no:" << endl;
    cin >> roll >> labno;

    int set1[] = {1, 2, 3, 4, 5, 6, 7};
    int size1 = sizeof(set1) / sizeof(set1[0]);
    int set2[] = {8, 9, 0, 5, 6, 7};
    int size2 = sizeof(set2) / sizeof(set2[0]);
    findDifference(set1, size1, set2, size2);
    return 0;
}
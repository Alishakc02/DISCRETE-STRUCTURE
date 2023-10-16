#include<iostream>
#include<string>
#include<stdbool.h>
using namespace std;
void findDifference(int set1[],int size1, int set2[], int size2)
{
    int i,j;
    cout<<"Difference between the sets is:"<<endl;
    for( i=0;i<size1;i++){
        bool found =false;
        }
    
    for( j=0;j<size2;j++){
        if (set1[i]==set2[j]){
           bool found= true;
            break;
        }
    }
    if(!found)
    {
        cout<<set1[i]<<endl;
    }
}
int main(){
    int set1[]={1,3,5,6,7,8};
    int size1=sizeof(set1)/sizeof(set1[0]);
    int set2[]={2,4,1,9,0};
    int size2=sizeof(set2)/sizeof(set2[0]);
    findDifference(set1,size1,set2,size2);
    return 0;
}
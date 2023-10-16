#include<iostream>
using namespace std;
void findCart(int arr1[], int arr2[],int n1,int n2){
    for(int i=0; i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("{%d,%d}",arr1[i],arr2[j]);
        }
    }
}
int main(){
    int arr1[]={1,3,4};
    int n1=sizeof arr1/sizeof(arr1[0]);
     int arr2[]={1,3,4};
    int n2=sizeof arr2/sizeof(arr2[0]);
    findCart(arr1,arr2,n1,n2);
    return 0;

}
#include<iostream>
using namespace std;
void unionofarray(int a[],int b[],int m,int n){
    int i=0, j=0;
    cout<<"Union of array:"<<endl;
    while(i<m && j<n ){
        if (a[i]<b[j]){
            cout<<a[i++]<<"";
             }
             else if(a[i]>b[j])
             {
                cout<<b[j++]<<" ";

             }
             else{
                cout<<a[i++]<<" ";
                j++;

             }

    }
    while(i<m){
        cout<<a[i++]<<"";
    }
    while(j<n){
        cout<<b[j++]<<" ";
    }

}
int main()
{
    int a[100],b[100],m,n,i,j;
    cout<<"Enter the size of the first matrix:"<<endl;
    cin>>m;
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of second matrix:"<<endl;
    cin>>n;
     for(j=0;j<n;j++){
        cin>>b[j];
}

unionofarray(a,b,m,n);
return 0;
}
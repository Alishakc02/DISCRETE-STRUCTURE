#include<iostream>
using namespace std;
int main(){
    int i,j,m,n,p,q;
    int first[5][5], second[5][5],join[5][5];
    cout<<"Enter the row and column of the first matrix:"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of the first matrix:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            cin>>first[i][j];
        }

    }
    cout<<"Enter the row and column of the second matrix:"<<endl;
    cin>>p>>q;
     cout<<"Enter the elements of the second matrix:"<<endl;
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++){
            cin>>second[i][j];
        }

    }
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            join[i][j]=first[i][j]||second[i][j];
        }
    }
    cout<<"Join of the matrices is:"<<endl;
 for(i=0;i<m;i++){
        for(j=0;j<q;j++){
      cout<<join[i][j]<<endl;
}
 }
return 0;


}
#include<iostream>
using namespace std;
int findFact(int n)
{
   int factorial=1,result;
   for(int i=1;i<=n;i++)
    factorial*=i;
  return factorial;
   
}
   int findnPr(int n,int r){
    return findFact(n)/(findFact(n-r));
   }
   int main(){
    int n,r,nPr;
    cout<<"Enter the base value n:"<<endl;
    cin>>n;
    cout<<"Enter the power raised r:"<<endl;
    cin>>r;
    nPr=findnPr(n,r);
    cout<<"The value of combimnation is:"<<nPr<<endl;
    return 0;


   }
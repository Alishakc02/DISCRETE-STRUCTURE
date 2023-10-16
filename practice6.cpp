#include<iostream>
using namespace std;
int findFact(int n)
{
   int factorial=1,result;
   for(int i=1;i<=n;i++)
    factorial*=i;
  return factorial;
   
}
   int findnCr(int n,int r){
    return findFact(n)/(findFact(n-r)*findFact(r));
   }
   int main(){
    int n,r,nCr;
    cout<<"Enter the base value n:"<<endl;
    cin>>n;
    cout<<"Enter the power raised r:"<<endl;
    cin>>r;
    nCr=findnCr(n,r);
    cout<<"The value of combimnation is:"<<nCr<<endl;
    return 0;


   }
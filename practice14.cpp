#include<iostream>
using namespace std;
void getGcd(int num1, int num2){
    int r1,r2,r,q;
 r1=num1;
 r2=num2;
 while(r2!=0){
 r=r1%r2;
 q=r1/r2;
 r1=r2;
 r2=r;
 }
 cout<<"The GCD of the two numbers is:"<<r1<<endl;

if(r1==1){
    cout<<"They are relatively prime numbers"<<endl;
}
else
{
    cout<<"They are not relatively prime numbers"<<endl;
}
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    getGcd(num1,num2);
    return 0;
}
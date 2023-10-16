#include<iostream>
using namespace std;
int factorial(int n){
    if (n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cout<<"Enter the number to find the factorial:"<<endl;
    cin>>n;
    cout<<"Factorial of the given number is:"<<factorial(n)<<endl;
    return 0;
}
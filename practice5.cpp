#include<iostream>
using namespace std;
int fib(int x){
    if(x==0 || x==1){
        return x;
    }
    else{
        return(fib(x-1)+fib(x-2));
    }
}
int main(){
    int x,i=0;
    cout<<"Enter the number to find the fibonacci:"<<endl;
    cin>>x;
    cout<<"Fibonacci of the given number is:"<<endl;
    while(i<x){
        cout<<" "<<fib(i)<<endl;
        i++;
        

    }
    return 0;
}
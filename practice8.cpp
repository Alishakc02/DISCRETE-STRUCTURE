#include<iostream>
using namespace std;
int calculatePower(int base,int power){
    if(power!=0){
        return(base*calculatePower(base,power-1));
    }
    else{
        return 1;
    }
}
int main(){
    int base,power;
    cout<<"Enter the value of base:"<<endl;
    cin>>base;
    cout<<"Enter the value of power:"<<endl;
    cin>>power;
    cout<<"The power of product is:"<<calculatePower(base,power)<<endl;
    
    return 0;
}
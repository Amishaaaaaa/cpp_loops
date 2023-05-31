//Q1 - Write a program to calculate the factorial of a number.
#include<iostream>
using namespace std;

int main(){
    int num,fac=1;
    cin>>num;
    while(num!=0){
        fac=fac*num;
        num=num-1;
    }
    cout<<fac;
    return 0;
}
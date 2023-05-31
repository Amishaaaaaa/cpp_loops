//Q2 - Write a program to print all Armstrong numbers between 100 to 500.
#include<iostream>
using namespace std;

int main(){
    int num,s,sum=0,check,cube=1;
    cin>>num;
    if(num>=100 && num<=500){
        check=num;
        while(num!=0){
            s=num%10;
            cube=s*s*s;
            num=num/10;
            sum=sum+cube;
        }
        if(sum==check){
            cout<<check;
        }
    }
    return 0;
}
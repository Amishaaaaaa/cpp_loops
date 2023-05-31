//Q4 - Write a program to reverse a given integer number.
#include<iostream>
using namespace std;

int main(){
    int num,rev=0,s;
    cin>>num;
    while(num!=0){
        s=num%10;
        num=num/10;
        rev=rev*10+s;
    }
    cout<<rev;
    return 0;
}

//Q3 - Write a program to find the sum of n natural numbers.
#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cin>>num;
    while(num!=0){
        sum=sum+num;
        num=num-1;
    }
    cout<<sum;
    return 0;
}
//Q7- Write a program to print + pattern given below :
/*  *
    *
  *****
    *
    * 
    */ 
#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i!=3){
            if(j==3){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}
//Q5 - Write a program to print the cross pattern given below (in the shape of X):
/*
*   *
 * *
  *
 * *
*   *
*/
#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(j==i || j==4-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main() {

    // int a=5;
    // int b=5;

    // cout<<a<<endl;

    // cout<<&a<<endl;
    // cout<<&b;

    // int a=5;
    // int* ptr= &a;
    
    // // access the value of ptr
    // cout<<*ptr<<endl;
    // cout<<ptr;

    int a=5;
    int *p=&a;
    int *q=p;
    cout<<*q;




  
    return 0;
}
#include<iostream>
using namespace std;

int main(){
   
    int a=5;
    int b=9;

    cout<<"("<<a<<","<<b<<")";
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"("<<a<<","<<b<<")";

}
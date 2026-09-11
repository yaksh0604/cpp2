#include<iostream>
using namespace std;
int main(){
    int a=99,b=66,temp;
    cout<<"before swaping a="<<a<<endl;
    cout<<"before swaping b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping a="<<a<<endl;
    cout<<"after swapping b="<<b<<endl;
    return 0;
}
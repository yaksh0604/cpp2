#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    int temp;

    int*p=&a;
    int*q=&b;

    cout<<"before swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    temp=*p;
    *p=*q;
    *q=temp;

    cout<<"after swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}
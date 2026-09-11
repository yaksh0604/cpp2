#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;

    cout<<"value of a="<<a<<endl;
    cout<<"value using pointer="<<*p<<endl;
    cout<<"value using pointer to pointer="<<**q<<endl;

    return 0;
}
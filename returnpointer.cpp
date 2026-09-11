#include<iostream>
using namespace std;
int*getvalue()
{
    static int a=10;
    return &a;
}
int main()
{
    int *p;
    p=getvalue();
    cout<<"value="<<*p<<endl;
    return 0;
    
}
#include<iostream>
using namespace std;
void fun(int*ptr)
{
    *ptr=90;
}
int main()
{
    int x=10;
    cout<<x<<endl;
    fun(&x);
    cout<<x;
    return 0;
}
#include<iostream>
using namespace std;
void add()
{
    cout<<"default function"<<endl;
}
void add(int x, int y)
{
    cout<<"two parameter function"<<endl;
}
void add(int x,int y, int z)
{
    cout<<"three parameter";
}
int main()
{
    add();
    add(10,20);
    add(10,20,30);
    return 0;
}
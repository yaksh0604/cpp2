#include<iostream>
using namespace std;
class unary_example
{
    public:int a;
    public:unary_example(int x)
    {
        a=x;
    }
    public:void showdata()
    {
        cout<<"value of a"<<a<<endl;
    }
    void operator_()
    {
        a=--a;
    }
};
int main()
{
    unary_example ex(60);
    ex.showdata();
    ex;
    ex.showdata();
}
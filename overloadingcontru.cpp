#include<iostream>
using namespace std;
class overloading_constru
{
    public:overloading_constru(int a=0)
    {
        cout<<"one argument"<<a<<endl;
    }
    public:overloading_constru(int a,int b)
    {
        cout<<"two argument"<<a+b<<endl;
    }
    public:overloading_constru(int a,int b, int c)
    {
        cout<<"three argument"<<a+b+c<<endl;
    }
};
int main()
{
    overloading_constru o1(10);
    overloading_constru o2(50,60);
    overloading_constru o3(101,101,101);
    return 0;
}
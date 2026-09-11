#include<iostream>
using namespace std;
class copy_constru
{
    public:int a,b;
    public:copy_constru(int x,int y)
    {
        a=x;
        b=y;
    }
    public:copy_constru(copy_constru & obj)
    {
        a=obj.a;
        b=obj.b;
    }
    public:void showdata()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main()
{
    copy_constru o1(20,30);
    copy_constru o2(o1);
    o1.showdata();
    o2.showdata();
    return 0;
}
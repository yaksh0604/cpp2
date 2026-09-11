#include<iostream>
using namespace std;
class base_one
{
    int x;
    public:char y;
    protected:int z;
    public:base_one()
    {
        x=90;
        cout<<"x="<<x<<endl;

    }
};
class derived_one:public base_one
{
    public:void insert()
    {
        y='T';
        z=900;

    }
};
class derived_two:public derived_one
{
    public:void display()
    {
        cout<<"y="<<y<<endl<<"z="<<z;
    }
};
int main()
{
    derived_two obj;
    obj.insert();
    obj.display();
    return 0;
}
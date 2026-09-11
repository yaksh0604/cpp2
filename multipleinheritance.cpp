#include<iostream>
using namespace std;
class base_one
{
    public:int x;
    protected:char y;

};
class base_two
{
    public:int z;

};
class derived:public base_one , public base_two
{
    public:void assign()
    {
        x=90;
        y='A';
        z=100;
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z;
    }
};
int main()
{
    derived obj;
    obj.assign();
    return 0;
}
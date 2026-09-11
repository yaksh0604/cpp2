#include<iostream>
using namespace std;
class a
{
    public:void display()
    {
        cout<<"1"<<endl;
    }
};
class b:virtual public a
{
    public:void display1()
    {
        cout<<"2"<<endl;
    }
};
class c:public b,public virtual a
{
    public:void dispaly2()
    {
        cout<<"3"<<endl;
    }
};
int main()
{
    c obj;
    obj.display1();
    obj.dispaly2();
    obj.display();
    return 0;

}
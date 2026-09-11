#include<iostream>
using namespace std;
class type
{
    public:char a;
    public:type(char x)
    {
        a=x;
    }
    public:void show()
    {
        cout<<"basic to class"<<a<<endl;
    }
};
int main()
{
    type obj='A';
    obj.show();
}
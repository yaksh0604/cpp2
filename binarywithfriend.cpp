#include<iostream>
using namespace std;
class binary_example
{
    public:int a,b;
    public:binary_example(){}
    public:binary_example(int x,int y)
    {
        a=x;
        b=y;
    }
    public:void show()
    {
        cout<<"addition of object"<<a<<endl<<b;
    }
    friend binary_example operator +(binary_example o1,binary_example o2);
};
binary_example operator + (binary_example o1,binary_example o2)
{
    binary_example temp;
    temp.a=o1.a+o2.a;
    temp.b=o1.b+o2.b;
    return temp;
}
int main()
{
    binary_example obj(30,40);
    binary_example obj1(10,20);
    binary_example obj2;
    obj2=obj+obj1;
    obj2.show();
    return 0;
}
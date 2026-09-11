#include<iostream>
using namespace std;
class dynamic_object
{
    public:int p;
    public:dynamic_object(){}
    public:dynamic_object(int x)
    {
        p=x;
        cout<<"p="<<p<<endl;
    }
};
int main()
{
    dynamic_object o;
    int data;
    cout<<"enter object data";
    cin>>data;
    o=dynamic_object(data);
    return 0;

}
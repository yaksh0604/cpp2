#include<iostream>
using namespace std;
class mil
{
    public:int a,b;
    public:mil(int x, int y):a(x),b(y){}

    public:void show()
    {
        cout<<"mil-a="<<a<<endl;
        cout<<"mil-a"<<b<<endl;

    }
};
int main()
{
    mil m(50,60);
    m.show();
}
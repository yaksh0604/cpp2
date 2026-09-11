#include<iostream>
using namespace std;
class destructor_example
{
    public:int a,b;
    public:destructor_example(int x, int y)
    {
        a=x;
        b=y;
        cout<<"constructor called";
    }
    public:void show()
    {
        cout<<a<<endl;
        cout<<b;

    }
    ~destructor_example()
    {
        cout<<"destructor called";
    }

};
int main()
{
    destructor_example d(90,56);
    d.show();

}
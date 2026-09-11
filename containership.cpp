#include<iostream>
using namespace std;
class frist
{
    public:frist()
    {
        cout<<"frist class"<<endl;
    }
};
class secound
{
    frist f1;
    public:void show()
    {
        cout<<"secound class";
    }
};
int main()
{
    
    
    secound s1;
    s1.show();
    return 0;
}
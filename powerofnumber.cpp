#include<iostream>
using namespace std;
int main()
{
    int base,exp;
    int result=1;

    cout<<"enetr base:";
    cin>>base;

    cout<<"enetr exponet:";
    cin>>exp;

    for(int i=1;i<=exp;i++)
    {
        result=result*base;
    }
    cout<<"result="<<result;

    return 0;
}
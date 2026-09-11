#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int binary,decimal=0,i=0,r;

    cout<<"enter binary number:";
    cin>>binary;

    while(binary>0)
    {
        r=binary%10;
        decimal=decimal+r*pow(2,i);
        binary=binary/10;
        i++;
    }
    cout<<"decimal number="<<decimal;

    return 0;
}
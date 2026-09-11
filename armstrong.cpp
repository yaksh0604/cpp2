#include<iostream>
using namespace std;
int main()
{
    int n,temp,r,sum=0;
    cout<<"enetr number:";
    cin>>n;
    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not an armstrong number";
    
    }
    return 0;
}
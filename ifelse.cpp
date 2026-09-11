#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter frist number";
    cin>>a;
    cout<<"enetr secound number";
    cin>>b;
    if(a>b)
        cout<<a<<"is number is maximum"<<endl;
    else if(b>a)
        cout<<b<<"is number is maximum"<<endl;
    else
        cout<<a<<"both number are eual"<<endl;

    return 0;
    
}
#include<iostream>
using namespace std;
int main(){
    char c;
    int a,b;
    cout<<"enter frist number:";
    cin>>a;
    cout<<"enetr secoundnumber:";
    cin>>b;
    cout<<"enetr opretor(+,-,*,/)";
    cin>>c;

    switch(c)
    {

        case'+':
        cout<<"sum="<<a+b;
        break;

        case'-':
        cout<<"sub="<<a-b;
        break;

        case'*':
        cout<<"mul="<<a*b;
        break;

        case'/':

        if(a!=0)
        cout<<"divistion="<<a/b;
        else
        cout<<"do not enetr 0";
        break;

        default:
        cout<<"enetr valid choice";

        return 0;
    }
}
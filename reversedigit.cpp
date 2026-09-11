#include<iostream>
using namespace std;
int main()
{
    int num,reversednum=0,originalnum=0,remainder;

    std::cout<<"enetr an integer:";
    std::cin>>num;

    while (num!=0)
    {
        remainder=num%10;
        reversednum=reversednum*10+remainder;
        num/=10;
    }
    std::cout<<"original number:"<<originalnum<<std::endl;
    std::cout<<"reversed number:"<<reversednum<<std::endl;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int num;

    std::cout<<"enetr a number:";
    std::cin>>num;

    std::cout<<"multilication table for"<<num<<":\n";

    for(int i=1;i<=10;i++)
    {
        std::cout<<num<<"x"<<i<<"="<<num*i<<std::endl;
    }
    return 0;
}
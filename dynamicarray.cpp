#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enetr size of array:";
    cin>>n;

    int*arr=new int[n];
    cout<<"enetr array elements:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array elements are"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,i;
    int arr[30];
    cout<<"Enter the number of elements";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {
        sum=sum+arr[i];
    }

        cout<<sum;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"the sum of the array is: "<<sum;
    return 0;
}

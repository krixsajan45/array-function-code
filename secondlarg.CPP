#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0],secondlargest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest)
        {
            secondlargest=arr[i];
        }
    }
    cout<<"second largest"<<secondlargest;
    return 0;
}
#include<iostream>
using namespace std;
long long factorial(int n)
{
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<factorial(n);
    return 0;
}
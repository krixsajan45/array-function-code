#include<iostream>
using namespace std;
int mmaximum(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()

{
    int x,y;
    cout<<"enter two numbers: ";
    cin>>x>>y;
    cout<<"maximum"<<mmaximum(x,y);
    return 0;
}
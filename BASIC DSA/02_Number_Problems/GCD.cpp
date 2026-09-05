#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter value of m";
    cin>>m;
    cout<<"enter value of n";
    cin>>n;
    while(m!=n)
    {
        if(m>n)
    m=m-n;
    else
    n=n-m;
    }
    cout<<m;
    return 0;

}
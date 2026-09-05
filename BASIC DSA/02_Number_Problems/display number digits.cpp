#include<iostream>
using namespace std;
int main()
{
    int n,r,i;
    cout<<"value of n";
    cin>>n;
    for(i=1;i<=n;i++)
{
    if(n>0)
    {
        r=n%10;
        n=n/10;
    }
    cout<<r;
    cout<<" ";
}
return 0;
}
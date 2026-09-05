#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int count=0;
    cout<<"value of n";
    cin>>n;
    for(i=1;i<=n;i++)
{
    if(n%i== 0)
    {
       count++;
    }
}
if(count>=2)
cout<<"not prime";

else
cout<<"prime";
return 0;
}
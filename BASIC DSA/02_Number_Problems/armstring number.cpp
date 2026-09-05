#include<iostream>
using namespace std;
int main()
{
    int n,r,i,m;
  
    int sum=0;
    cout<<"value of n";
    cin>>n;
    m=n;
    

    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }

if(sum==m)
cout<<"armstrong";

else
cout<<"not armstrong";
return 0;
}
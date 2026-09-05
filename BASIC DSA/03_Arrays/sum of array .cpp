#include <iostream>
using namespace std;
int main()
{
    int a[7]={1,4,5,6,4,5,5};
    int n=7;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[7]={1,4,5,6,4,5,5};
    int n=7;
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
           max=a[i];
    }
    cout<<max;
    return 0;
}
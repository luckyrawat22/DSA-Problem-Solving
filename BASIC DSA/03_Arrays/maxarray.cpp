#include <iostream>
using namespace std;
int main()
{
    int  a[5]={2,3,4,8,6,};
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    cout<<"max is"<<max;
    return 0;
}
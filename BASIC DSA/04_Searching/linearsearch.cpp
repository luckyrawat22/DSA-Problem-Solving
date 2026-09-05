#include <iostream>
using namespace std;
int main4()
{
    int A[10],n=10;
    int key;
    cout<<"enter a number";
    for(int i=0;i<n;i++)
    {
cin>>A[i];
    }
    cout<<"enter key";
    cin>>key;
 for(int i=0;i<n;i++)
 {
    if(key==A[i])
    {
        cout<<"key found at"<<i;
        return 0;
      }
 }
 cout<<"key not found";
 return 0;
}
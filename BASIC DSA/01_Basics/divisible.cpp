#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter two number ";
    cin>>a>>b;
    if (b==0)
    cout<<"divisible by zero";
    else
    c=a/b;
    cout<<c<<endl;
    return 0;
}
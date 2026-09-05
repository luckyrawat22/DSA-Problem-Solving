#include <iostream>
using namespace std;
int main(){
    int a[5]={2,4,6,8,10};
    int *p=a;
    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    return 0;
}
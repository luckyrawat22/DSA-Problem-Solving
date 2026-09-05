#include <iostream>
using namespace std;
int main(){
    int a[10]={2,3,4,5,6,7,8,9,10,11};
    int max=a[0];
    for(auto x:a)
    {
        if(x>max)
        max=x;
    }
    cout<<"maximum number is"<<max<<endl;
    return 0;
}
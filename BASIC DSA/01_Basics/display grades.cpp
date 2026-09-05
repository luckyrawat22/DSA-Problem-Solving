#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter marks of subjects ";
    cin>>x>>y>>z;
    float avg;
    int total;
    total=x+y+z;
    avg=total/3.0;
    if (avg>=60)
    cout<<"A";
    else if (avg>=30)
    cout<<"B";
    else
    cout<<"C";
    return 0;
}
#include <iostream>
using namespace std;


    template<class T>
    T maximum(T a,T b){
        return a>b?a:b;
    }
int main(){
    cout<<maximum(10,20)<<endl;
    cout<<maximum(10.5,22.5)<<endl;
cout<<maximum(22.5f,44.5f)<<endl;
return 0;}
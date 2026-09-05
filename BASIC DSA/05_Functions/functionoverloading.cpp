#include <iostream>
using namespace std;
int add(int x,int y){
    return x+y;}
    int add(int x,int y,int z){
        return x+y+z;
    }
int main() {
    int a=10,b=44,c,d;
    c=add(a,b);
    d=add(a,b,c);
    cout<<"the sum of two num"<<d<<endl;
    


}


 


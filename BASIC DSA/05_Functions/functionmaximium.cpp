#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main() {
    int x = 10,y=20,z=11,u;
    u = maximum(x,y,z);
    cout<<"the maximum is"<<u<<endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,r1,r2;
    cout<<"enter the value of a ,b and c";
    cin>>a >>b >>c;
    r1=(-b + sqrt(b*b-4*a*c))/(2*a);
    r2=(-b - sqrt(b*b-4*a*c))/(2*a);
    cout << "Roots are: " << r1 << " and " << r2 << endl;
    return 0;

}
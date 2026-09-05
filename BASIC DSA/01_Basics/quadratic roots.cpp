#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,d;
    cout<<"enter the value of a ,b and c";
    cin>>a >>b >>c;
    d= b*b-4*a*c;
    if (d==0)
    cout<<"roots are real and equal "<<(-b/(2*a));
    
    else  if(d>0)
        cout<<"roots are real and unequal"<<(-b + sqrt(b*b-4*a*c))/(2*a);
        
    
    else 
    cout<<"imaginary";
    return 0;     
}
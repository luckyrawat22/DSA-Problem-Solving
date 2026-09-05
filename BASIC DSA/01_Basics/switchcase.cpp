#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter day number";
    cin>>day;
    switch(day)
    {
        case 1: cout<<"monday";
        break;
        case 2: cout<<"tuesday";
        break;
        case 3: cout<<"wednesday";
        break;
        case 4: cout<<"thrusday";
        break;
        default : cout<<"invalid";
    }
    return 0;
}
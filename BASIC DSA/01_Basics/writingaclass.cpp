#include <iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    r2.length=20;
    r2.breadth=10;
    cout<<"Area of rectangle 1: "<<r1.area()<<endl;
    cout<<"Perimeter of rectangle 1: "<<r1.perimeter()<<endl;
    cout<<"Area of rectangle 2: "<<r2.area()<<endl;
    cout<<"Perimeter of rectangle 2: "<<r2.perimeter()<<endl;
}
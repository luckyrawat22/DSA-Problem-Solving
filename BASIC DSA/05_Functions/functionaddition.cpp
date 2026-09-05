#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

int main() {
    float x = 2.4, y = 5.6, z;
    z = add(x, y);
    cout << "the sum " << z << endl;
    return 0;
}
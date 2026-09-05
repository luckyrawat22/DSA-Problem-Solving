#include <iostream>
using namespace std;
int main(){
    float billAmount;
    float discount=0.0;

    cout<<"enter bill amount:";
   cin>>billAmount;
   if (billAmount >= 500)
      discount = billAmount * 20 / 100;
   else if (billAmount >= 100)
      discount = billAmount * 10 / 100;

   cout << "Bill amount: " << billAmount << endl;
   cout << "Discount: " << discount << endl;
   cout << "Amount after discount: " << billAmount - discount << endl;
   return 0;
}

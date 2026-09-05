#include <iostream>
using namespace std;
int search(int a[],int n,int key){
    for (int i=0;i<n;i++){
        if(a[i]==key)
        return i;
    }
    return -1;
}
int main(){
    int a[]={2,3,4,5,6};
    int k=4;
    int index=search(a,5,k);
    cout<<"the element is found "<<index<<endl;
}

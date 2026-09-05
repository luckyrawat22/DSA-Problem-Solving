include <iostream>
using namespace std;
void solve()
{
    int count=0;
    int n;
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        int last=n%10;
        n=n/10;
        if (last!=0)
            count++;
        
    }
    cout<<count<<endl;
    int x=1;
    while(n!=0)
    {
        int last=n%10;
        n=n/10;
        if(last!=0){
            cout<<(last*x)<<endl;
        }
        x=x*10;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
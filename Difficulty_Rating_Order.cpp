#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
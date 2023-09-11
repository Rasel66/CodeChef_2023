#include<iostream>
using namespace std;
void solve(){
    int n,x,cost=0;
    cin>>n>>x;
    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=x){
            cost = cost + b[i];
        }
    }
    cout<<cost<<endl;
}
int main()
{
    int t;
    cin>> t;
    while(t--){
        solve();
    }
    return 0;
}
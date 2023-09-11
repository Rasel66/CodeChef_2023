#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    sort(arr, arr+n);
    for(int i=n-1; i>=0; i--){
        if(arr[i] != arr[i-1]){
            cout<< arr[i]+arr[i-1]<<endl;
            break;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
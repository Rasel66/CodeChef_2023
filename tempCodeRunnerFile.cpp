#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i=1]){
                cout<<"Yes"<<endl;
                return 0;
            }
            
        }
        cout<<"No"<<endl;
    }
}
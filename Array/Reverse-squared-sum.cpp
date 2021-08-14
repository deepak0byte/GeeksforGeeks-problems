#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-->0){
        int n,ans=0,ans1=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        reverse(arr,arr+n);
        for(int i=0; i<n; i++){
            if(i%2==0){
                ans+=arr[i]*arr[i];
            }
            else{
                ans1+=arr[i]*arr[i];
            }
        }
        cout<<ans-ans1<<endl;
    }  
    return 0;
}
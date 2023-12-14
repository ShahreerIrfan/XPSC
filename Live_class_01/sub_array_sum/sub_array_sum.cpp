#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    int mx = INT_MIN;
    for(int i=0;i<n;i++)cin>>arr[i];
    int k;cin>>k;
    for(int i=0;i<=n-k;i++){
        int s = 0; //Reseting sum value
        for(int j=i;j<i+k;j++){
            s+=arr[j];
        }
        mx = max(mx,s);
    }
    cout<<mx<<endl;
    return 0;
}
// Totally easy problem.....

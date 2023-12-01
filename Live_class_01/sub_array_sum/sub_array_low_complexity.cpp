#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int mx = 0;
    for(int i= 0 ;i< n; i++)cin>>arr[i];
    int k;cin>>k;
    int i = 0,j=0;
    int sum = 0;
    while(j <= n){
        if(j<k){
            sum+=arr[j];
            j++;
        }
        else{
            mx = max(mx,sum);
            sum-=arr[i];
            i++;
            sum+=arr[j];
            j++;
        }

    }
    cout<<mx<<endl;
    return 0;
}
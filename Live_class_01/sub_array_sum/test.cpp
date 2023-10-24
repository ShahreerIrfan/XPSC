#include<bits/stdc++.h>
using namespace std;
int main(){
    string txt,ptr;
    cin>>txt>>ptr;
    int fr1[26]={0};

    for(char c : ptr){
        fr1[c-'a']++;
    }
    for(int i =0;i<26;i++){
        cout<<fr1[i]<<" ";
    }
    return 0;
}
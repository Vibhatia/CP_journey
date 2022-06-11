#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n][2];
    int p=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i][1]<=k){
            p=max(p,arr[i][0]);
        }
        else{
            p=max(p,arr[i][0]-arr[i][1]+k);
        }
    }
    cout<<p;
    return 0;
}
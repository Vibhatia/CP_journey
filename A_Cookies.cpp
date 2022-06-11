#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool even=false;
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2==0){
            even=true;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        count++;
    }
    if(even){
        cout<<count;
    }
    else{
        cout<<n-count;
    }
    return 0;
}
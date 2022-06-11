#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int e=n*n;
    int s=1;
    int p=n;
    while(n){
        for(int i=0;i<p/2;i++){
        cout<<s<<" "<<e<<" ";
        s++;
        e--;
    }
    cout<<endl;
        n--;
    }
    return 0;
}
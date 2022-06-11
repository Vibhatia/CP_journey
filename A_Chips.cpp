#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int sum=k;
    bool exit=false;
   while(sum>0){
       for(int i=1;i<=n;i++){
           if(sum-i>=0)
           sum=sum-i;
           else{
            exit=true;   
           break;
       }
   }
   if(exit)
   break;

 
}
  cout<<sum;
  return 0;
}
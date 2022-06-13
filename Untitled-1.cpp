/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int ind,vector<int> &ds,int  s,int sum,int arr[],int n){
   
    if(ind==n){
         if(sum==s){
        for(auto i:ds){
            cout<<i<<" ";
        }
        cout<<endl;
        
         }
    return;
    }
    
    ds.push_back(arr[ind]);
    s+=arr[ind];
    print(ind +1,ds,s,sum,arr,n);
    sum-=arr[ind];
    ds.pop_back();
    
    print(ind+1,ds,s,sum,arr,n);
    
    
}
int main()
{
    int arr[] = {1,2,3};
    vector<int> ds;
    int n=3;
    int sum=2;
    vector<vector<int>> ans;
    
    print(0,ds,0,sum,arr,n);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<endl;
    // }
    return 0;
} 
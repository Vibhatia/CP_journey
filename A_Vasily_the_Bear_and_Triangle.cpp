#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<0<<" "<<x+y<<" "<<x+y<<" "<<0;
    }
    else if(x<0 && y>0){
        cout<<(-y+x)<<" "<<0<<" "<<0<<" "<<y-x;
    }
    else if(x<0 && y<0){
         cout<<(y+x)<<" "<<0<<" "<<0<<" "<<(y+x);
    }
    else if(x>0 && y<0){
         cout<<0<<" "<<(y-x)<<" "<<-(y-x)<<" "<<0;
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int N=1000000;
bool prime[1000001];
void check(){
prime[0]=false;
prime[1]=false;
for(int i=2;i*i<=N;i++){
    prime[i]=true;
}
for(int i=2;i*i<=N;i++){
    if(prime[i]){
        for(int j=i*i;j<N;j+=i){
        // Suppose i=8,we generally makes false multiples of 8i.e.8*2,8*3 and so on.We optimize it by thinking
        //that 16,24 up to 56 is already false by others i,so we start checking it by i*i. 
            prime[j]=false;
        
        }
    }
}

}
int main() {
	// your code goes here
	check();
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
 	  if(prime[n])
 	  cout<<"true"<<endl;
 	  else
 	  cout<<"false"<<endl;
	}
	return 0;
}
    
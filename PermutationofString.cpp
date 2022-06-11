#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Permutation(string str,int index, vector<string> &ans){
	    if(index>=str.length()){
	        ans.push_back(str);
	        return;
	    }
	    for(int j=index;j<str.length();j++){
	        swap(str[index],str[j]);
	       
	         Permutation( str, index+1,ans);
	         swap(str[index],str[j]);//backtracking to gain original string 
	    }
	}
int main() {
	// your code goes here
	string str="abcd";
	
	int index=0;
	vector<string> ans;
	Permutation( str, index, ans);
	
	for(int i=0;i<ans.size();i++){
	    cout<<ans[i]<<" ";
	}
	return 0;
}

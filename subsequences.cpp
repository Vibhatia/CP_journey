
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subsets(string str, string output, int index, vector<string> &ans)
{
    if (index >= str.length())
    {
        // TO remove space from pushing into ans we can apply condition like
        //    if(output.length()>=1)
        ans.push_back(output);
        return;
    }

    subsets(str, output, index + 1, ans);
    char element = str[index];
    output.push_back(element);
    subsets(str, output, index + 1, ans);
}
int main()
{
    string str = "1234";
    string output = "";
    vector<string> ans;
    int index = 0;
    subsets(str, output, index, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}
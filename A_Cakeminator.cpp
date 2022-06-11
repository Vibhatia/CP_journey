#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;

    string s[row];
    for (int i = 0; i < row; i++)
    {
        cin >> s[i];
        // cout<<s[i]<<endl;
    }
    int rc = 0, cc = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (s[i][j] == 'S'){
                rc++;
                break;
            }
        }
    }
    
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (s[j][i] == 'S'){
                cc++;
                

            break;
            }
        }
    }

    int p=(row-rc)*(col-cc);
     cout << (row - rc) * col+(col-cc)*row - p;
    
    return 0;
}
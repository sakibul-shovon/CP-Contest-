// File Name: G.cpp
// Date: 2023-07-22
// Time: 11:31:43

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s;

    while(getline(cin,s))
    {

        for(int i=0;i<s.size();i++)
        {
        s[i] = s[i] - 7;
        }

    cout<<s<<endl;

    }

    
    return 0;
}

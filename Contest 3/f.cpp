// File Name: f.cpp
// Date: 2023-07-21
// Time: 00:29:26

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t; cin>>t;
    int total = 0;

    while(t--)
    {
        string s; cin>>s;
        if(s == "donate")
        {
            int x; cin>>x;
            total = total + x;
        }
        else if(s == "report")
        {
            cout<<total<<endl;
        }

    }
    return 0;
}

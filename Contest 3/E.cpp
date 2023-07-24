// File Name: E.cpp
// Date: 2023-07-20
// Time: 21:25:09

#include <bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;

    while(test--)
    {
        
    string s; cin>>s;
    
    int n = s.size();

    if(n==5) cout<<3<<endl;
    else if(s[0]=='o' && s[1]=='n' || s[1]=='n' && s[2] == 'e' || s[0]=='o' && s[2]=='e')
    {
        cout<<1<<endl;
    }

    else{
        cout<<2<<endl;
    }
    }
    return 0;
}

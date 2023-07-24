// File Name: k.cpp
// Date: 2023-07-21
// Time: 15:41:01

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t; cin>>t;

    while(t--)
    {
        string s; 
        getline(cin,s);

        int alph[26] = {0},max = 0;

        for(int i=0;i<s.length();i++)
        {
            s[i] = tolower(s[i]);
            
            if(s[i]>='a' && s[i]<='z')
            {
                alph[s[i]-'a']++;
                if(alph[s[i]-'a']>max )
            }
        }
    }
    return 0;
}

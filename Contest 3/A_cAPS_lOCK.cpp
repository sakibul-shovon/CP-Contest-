// File Name: A_cAPS_lOCK.cpp
// Date: 2023-07-20
// Time: 02:09:33

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s; cin>>s;

    int count = 0;
    //check all case upper ?
    bool check = false;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            count++;
           
        }
    }

    if(count == s.length()) check = true;

    if(s[0] >='a' && s[0] <='z') count++;

    if(check == true)
    {
        for(int i=0;i<=s.length();i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    else if(count == s.length())
    {
        s[0] = toupper(s[0]);
        for(int i=1;i<s.length();i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout<<s<<endl;
    //cout<<count<<s.length()<<endl;
    return 0;
}

// File Name: A_Grasshopper_And_the_String.cpp
// Date: 2023-07-20
// Time: 13:38:09

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s; cin>>s;
    int max = 0;
    
    int count = 1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A' || s[i] == 'E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            count = 1;
        }
        else{
            count++;
        }

        if(count > max)
        {
            max = count ;
        }
    }

    cout<<max<<endl;
    return 0;
}

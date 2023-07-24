// File Name: A_Dubstep.cpp
// Date: 2023-07-18
// Time: 21:51:12

#include <iostream>
#include<string>
using namespace std;
int main(){
    
    string s; cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if( s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            cout<<" ";
            i = i+2;
        }

        else{
            cout<<s[i];
        }
    }
    return 0;
}

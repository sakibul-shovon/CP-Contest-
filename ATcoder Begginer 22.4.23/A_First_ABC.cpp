// File Name: A_First_ABC.cpp
// Date: 2023-07-22
// Time: 18:01:36

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin>>n;
    
    int count = 0;
    string s; cin>>s;

    bool a=false,b=false,c=false;

    for(int i=0;i<n;i++)
    {
       if(s[i] == 'A') 
       {
        a = true;
       } 

       else if(s[i] == 'B')
       {
        b= true;
       }

       else if(s[i]=='C')
       {
        c=true;
       }
       count++;

       if(a && b && c)
       {
        break;
       }

    }
    cout<<count<<endl;
    return 0;
}

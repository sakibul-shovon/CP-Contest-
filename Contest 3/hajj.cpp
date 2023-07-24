// File Name: hajj.cpp
// Date: 2023-07-20
// Time: 21:03:50

#include <bits/stdc++.h>
using namespace std;
int main(){

    int count = 1;
    
    while(1)
    {
        string s; cin>>s;
        if (s == "*")
        {
            break;
        }

        if(s=="Hajj")
        {
            cout<<"Case "<<count<<": "<<"Hajj-e-Akbar"<<endl;
        }

        else{
            cout<<"Case "<<count<<": "<<"Hajj-e-Asghar"<<endl;
        }
        count++;


    }
    return 0;
}

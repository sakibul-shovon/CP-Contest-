// File Name: D_Triangle_validator.cpp
// Date: 2023-07-05
// Time: 10:43:11

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}


// File Name: E_The_missing_number.cpp
// Date: 2023-07-05
// Time: 10:52:09

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n,sum = 0;
    for(int i=1;i<=99;i++)
    {
        cin>>n;
        sum = sum + n;
    }

    int ans = 5050 - sum;
    cout<<ans<<endl;
    return 0;
}

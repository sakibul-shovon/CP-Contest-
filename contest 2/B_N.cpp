// File Name: B_N.cpp
// Date: 2023-07-13
// Time: 01:25:44

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int A = a - c;
        int B = b - d;

        if(A<B)
        {
            cout<<"First"<<endl;
        } 
        else if(B<A)
        {
            cout<<"Second"<<endl;

        }

        else{
            cout<<"Any"<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        n =n - x;
        if(n<0)
            n=0;
            
        int ans=n/4;
        
        if(n%4!=0)
        {
            ans = ans + 1;
            
        }
        cout<<ans<<endl;
    }
}
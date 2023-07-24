

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s; cin>>s;
    int upper_count = 0,lower_count = 0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] >= 65 && s[i] <= 90) 
        {
            upper_count++;
        }

        else{
            lower_count++;
        }
    }
    
    if(lower_count > upper_count || lower_count == upper_count)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    else{
        for(int i=0;i<s.size();i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    
    cout<<s<<endl;
    //cout<<lower_count<<upper_count;
    return 0;
}

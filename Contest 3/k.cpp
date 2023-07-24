#include <iostream>
using namespace std;
int main()
{
 
    int t;
    cin>>t;
    string s;
    getline(cin, s);

    while(t--)
    {
        getline(cin, s);
        int alpa[26]={0}, max=0;
        for(int i=0; i<s.length(); i++){
            s[i]=tolower(s[i]);
            if(s[i]>='a' && s[i]<='z'){
                alpa[s[i]-'a']++;
                if(alpa[s[i]-'a']>max)max=alpa[s[i]-'a'];
            }
        }
        for(int i=0; i<26; i++)
            if(alpa[i]==max)cout<<(char)(i+97);
        cout<<endl;
    }
    return 0;
}
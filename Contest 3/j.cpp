// File Name: j.cpp
// Date: 2023-07-21
// Time: 16:58:32

#include <bits/stdc++.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>

using namespace std;
int main(){
    
    char text[1000];
    char arr[] = "`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./";

    cin.getline(text, 1000);
    int n;
    int len = strlen(text);
    
    for(int i=0;i<len;i++)
    {
         n=tolower(text[i]);
        
        if(n!='`'&& n!='q'&&n!='a'&&n!='z'
                &&n!='w'&&n!='s'&&n!='x')
        {
            for(int j=0; j<=46;j++)
            {
                if(n == ' ')
                {
                    cout<<" ";
                    break;
                }

                if(n == arr[j])
                {
                    cout<<arr[j-2];
                    break;
                }
            }
        }

    }
    cout<<endl;
    return 0;
}

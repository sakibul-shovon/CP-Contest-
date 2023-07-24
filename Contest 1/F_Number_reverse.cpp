// File Name: F_Number_reverse.cpp
// Date: 2023-07-05
// Time: 10:36:52

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    long long int n;
    cin>>n;
    long long int rev = 0,rem;

    while (n != 0) 
    {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }

  cout<<rev<<endl;
  return 0 ;



}

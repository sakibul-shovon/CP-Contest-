// File Name: B_Vacation_Together.cpp
// Date: 2023-07-22
// Time: 18:31:08

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int people,day;
    cin>>people>>day;
    int arr[people][day];

    for(int i=0;i<people;i++)
    {
        for(int j=0;j<day;j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for(int i=0;i<people;i++)
    {
        for(int j=0;j<day;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }


    return 0;
}

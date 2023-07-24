#include <iostream>
using namespace std;

int main() {
	
	int t;
    cin>>t;


	while(t--) {
	    int n,x;
	    cin>>n>>x;
        int total = n*x;
	    if(total%4 ==0){
	        cout<<total/4<<endl;
	    }
	    else{
	        cout<<total/4 + 1<<endl;
	    }
	}	
	
	return 0;
}

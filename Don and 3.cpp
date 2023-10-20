#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x%3==0 || y%3==0)
	        cout<<"0";
	    else if(x%3 == y%3)
	        cout<<"1";
	    else
	        cout<<"2";
	    cout<<endl;
	}
	return 0;
}

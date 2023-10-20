#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int i=500-(x*2);
        int z=1000-((x+y)*4);
        int p=1000-(y*4);
        int s=500-((x+y)*2);
        cout<<max((i+z),(p+s))<<endl;
        
    }
	
	return 0;
}

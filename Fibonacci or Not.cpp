#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,number;
    cin>>number;
    if((number==0) or (number==1)) cout<<"True";
    
    else{
        n3= n1+n2;
        while(n3<number)
        {
            n1=n2;
            n2=n3;
            n3=n1+n2;
        }
        if(n3==number) cout<<"True";
      else cout<<"False";
  }
  return 0;  
}

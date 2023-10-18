#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num1= n,c=0;
    while(num1!=0)
    {
        num1/=10;
        c++;
    }
    num1=n;
    int sum=0;
    while(num1!=0)
    {
        int rem=num1%10;
        sum+=pow(rem,c);
        num1/=10;
        c--;
    }
   if(sum==n) cout<<"True"<<endl;
   else cout<<"False"<<endl;
}

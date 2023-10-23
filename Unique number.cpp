#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    cin >> temp;
    while(temp)
    {
        if(temp%10==0)
        {
            zero++;
        }
        else if(temp%10==1)
        {
            one++;
        }
        else if(temp%10==2)
        {
            two++;
        }
        else if(temp%10==3)
        {
            three++;
        }
        else if(temp%10==4)
        {
            four++;
        }
        else if(temp%10==5)
        {
            five++;
        }
        else if(temp%10==6)
        {
            six++;
        }
        else if(temp%10==7)
        {
            seven++;
        }
        else if(temp%10==8)
        {
            eight++;
        }
        else if(temp%10==9)
        {
            nine++;
        }
        temp/=10;
    }
    if(zero<2 && one<2 && two<2 && three<2 && four<2 && five<2 && six<2 && seven<2 && eight<2 && nine<2 )
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}

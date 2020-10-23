#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,x,d;
        cin>>n>>x;
        if(n==1||n==2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            d=(n-2)/x;
            if((n-2)%x==0)
            {
                d=d+1;
            }
            else
            {
                d=d+2;
            }
            cout<<d<<endl;
            
        }
        t--;
    }
}
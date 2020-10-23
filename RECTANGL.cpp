#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[4];
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<4; j++)
        {
            int a;
            cin>>a;
            arr[j]=a;
        }
        sort(arr,arr+4);
        if(arr[0]<0||arr[1]<0||arr[2]<0||arr[3]<0)
        {
            cout<<"NO"<<endl;
        }
        else if(arr[0]==arr[1]&&arr[2]==arr[3])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        int element;
        cin>>element;
        arr[i]=element;
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
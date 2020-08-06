#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort(int arr[])
{
    sort(arr,arr+3);
    for(int j=0; j<3; j++)
            {
                cout<<arr[j]<<endl;
            }
}
int main()
 {
      
        int arr[3];
        for (int i=0; i<3; i++)
        {
            int element;
            cin>>element;
            arr[i]=element;
        }
        sort(arr,arr+3);
            for(int j=0; j<3; j++)
            {
                     cout<<arr[j]<<endl;
        }
        
 }
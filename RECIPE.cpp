#include <iostream>
#include <bits/stdc++.h>
 using namespace std;
  int main()
  {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int size;
        cin>>size;
        int arr[size];
        int arrc[size];
        for(int j=0; j<size; j++)
        {
            int element;
            cin>>element;
            arr[j]=element;
        }
        for(int j=0; j<size; j++)
        {
             arrc[j]=arr[j];
        }
        sort(arr,arr+size);
        int a=arr[size-1];
        for(int k=a; k>0; k--)
        {
            int count=0;
            for(int l=0; l<size; l++)
            {
                int b=arr[l];
                if(b%k==0)
                count++;
            }
            if (count==size)
            {
            for (int m=0; m<size; m++)
            {
                arrc[m]=arrc[m]/k;
            }
            }
        }
            for( int m=0; m<size; m++)
            {
                cout<<arrc[m]<<" ";
            }
            cout<<endl;
        }
    }
    
    /*int main()
    {
        int t;
        cin>>t;

        for(int i=0; i<t; i++)
        {
            int size;
            cin>>size;
            int arr[size];
            for(int j=0; j<size; j++)
            {
                int element;
                cin>>element;
                arr[j]=element;
            }
            sort(arr,arr+size);
            int lar=arr[size-1];
            for(int k=1; )*/
    
            
        
    
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
main()
 {
      int t;
       cin>>t;
          for (int i=0; i<t; i++)
        {
            int arr[3];
            for(int j=0; j<3; j++)
            {
                int element;
                cin>>element;
                arr[j]=element;
            }
           sort(arr,arr+3);
            cout<<arr[1]<<endl;
        }
 }
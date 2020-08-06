#include <iostream>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     long int arr[t];
     long int result[t];
     for(int i=0; i<t; i++)
     {
         long int element;
         cin>>element;
         arr[i]=element;
         result[i]=1;
     }


         for(int i=0; i<t; i++)
         {
            long int n=arr[i];
            for(int j=n; j>0; j--)
            {
                result[i]=result[i]*j;
            }
         }
         for(int i=0; i<t; i++)
         {
             cout<<result[i]<<endl;
         }
     
 }
 
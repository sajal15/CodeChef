#include <iostream>
using namespace std;
 int main()
 {
      int t;
       cin>>t;
       //int arr[t];
       for(int i=0; i<t; i++)
       {
           int element;
            cin>>element;
            //arr[i]=element;
            if(element<10)
            {
                cout<<"Thanks for helping Chef!"<<endl;
            }
            else
            cout<<"-1"<<endl;
       }
 }
#include <iostream>
 using namespace std;
  int main()
  {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long int a;
        cin>>a;
        int count=0;
        if(a==1)
        {
          cout<<"no"<<endl;
        }
        else
        {
        for(int j=1; j<a; j++)
        {
            if(a%j==0)
            count++;
        }
        if(count>1)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
        }
    }
  }
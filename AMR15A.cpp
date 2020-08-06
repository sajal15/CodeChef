#include <iostream>
 using namespace std;
  int main()
  {
    int t;
    cin>>t;
    int even=0;
    int odd=0;
    for(int i=0; i<t; i++)
    {
         int n;
        cin>>n;
        if(n%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>odd)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    cout<<"NOT READY"<<endl;
  }
  
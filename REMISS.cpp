#include <iostream>
 using namespace std;
  int main()
  {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long int a,b;
        cin>>a>>b;
        long long int min,max;
        if(a>b)
        min=a;
        else
        min=b;
        
        max=a+b;
        cout<<min<<" "<<max<<endl;
    }
  }
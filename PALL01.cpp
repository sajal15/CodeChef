#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int num;
        int reverse=0;
        int j=1;
        cin>>num;
        int n=num;
         int rem;        
        while(n!=0)    
        {    
            rem=n%10;      
            reverse=reverse*10+rem;    
            n/=10;    
        }        
        if(reverse==num)
            cout<<"wins"<<endl;
        else
        cout<<"loses"<<endl;
        
    }
}

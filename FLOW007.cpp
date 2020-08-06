#include <iostream>
using namespace std;

int reverse(int n)
{
 int reverse=0, rem;        
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }         
return reverse;  
}
int main()
{
    int t;
    cin>>t;
    int result[t];
    int arr[t];
    for(int i=0; i<t; i++)
    {
        int element;
        cin>>element;
        arr[i]=element;
    }
     for(int i=0; i<t; i++)
    {
        result[i]=reverse(arr[i]);
    }
     for(int i=0; i<t; i++)
    {
        cout<<result[i]<<endl;
    }
}
#include <iostream>
using namespace std;
int four(int n)
{
    int count=0; 
    while (n != 0) 
    { 
        if(n%10==4)
        {
            count++;
        }
        n = n / 10; 
    } 
    return count;
}
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        int element;
        cin>>element;
        arr[i]=element;
    }
    for(int i=0; i<t; i++)
    {
        int x;
        x=four(arr[i]);
        cout<<x<<endl;
    }
}
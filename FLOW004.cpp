#include <iostream>
using namespace std;
int sum(int n)
{
    int last=n%10;
    int num=n;
    while(num>=10)
    {
        num=num/10;
    }
    int first=num;
    int sum=first+last;
    return sum;
}
int main()
{
    int t;
    cin>>t;
    int arr[t];
    int result[t];
    for(int i=0; i<t; i++)
    {
        int element;
        cin>>element;
        arr[i]=element;
    }
    for(int i=0; i<t; i++)
    {
        int x=sum(arr[i]);
        cout<<x<<endl;
    }
}
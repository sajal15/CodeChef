#include <iostream>
#include <cmath>
using namespace std;
int root(int n)
{
    int root=sqrt(n);
    return root;
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
        x=root(arr[i]);
        cout<<x<<endl;
    }
}
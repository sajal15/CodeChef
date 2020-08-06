#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        int product=1;
        for(int j=0; j<n; j++)
        {
            int a;
            cin>>a;
            product=product*a;
        }
        if (product%2==0)
        cout<<"NO"<<endl;

        else
        cout<<"YES"<<endl;
    }
}
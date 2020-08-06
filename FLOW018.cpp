#include <iostream>
using namespace std;
int main()
{  
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int num;
        cin>>num;
        long long int factorial=1;
        for(int j=1; j<=num; j++ )
        {
            factorial=factorial*j;
        }
        cout<<factorial<<endl;
    }
}
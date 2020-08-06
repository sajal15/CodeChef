#include <iostream>
using namespace std;
int icecream(int n, int arr[])
{
    int shop=0;
    int ret;
    int count=1;
    for(int j=0; j<n; j++)
        {
            int element;
            element=arr[j];
            ret=element-5;
            if(shop>=ret)
            {
                count=count*1;
            }
            else
            {
                return -1;
            }
            shop=shop+element;
            shop=shop-ret;
        }
        return count;
        cout<<count<<endl;
}

int main()
{
    int t;
    int n;
    cin>>t;
    int result[t];
    for (int i=0; i<t; i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            int element;
            cin>>element;
            arr[i]=element;
        }
        result[i]=icecream(n,arr);
    }
    for (int i=0; i<t; i++)
    {
        if(result[i]==1)
        cout<<"Yes";
        if(result[i]==-1)
        cout<<"No";
    }
}
/*#include <bits/stdc++.h>
using namespace std;
string check(int arr[], int n)
{
    if(arr[0] != 5)
        return "NO";
    int c5=0, c10=0;
    for(int i=0;i<n;i++) {
        if(arr[i] == 5){
            c5++;
        }
        else if(arr[i] == 10) {
            if(c5 == 0)
                return "NO";
            c5--;
            c10++;
        }
        else if(arr[i] == 15) {
            if(c5 == 0 && c10 == 0)
                return "NO";
            if(c10 > 0)
                c10--;
            else{
                if(c5 >1)
                    c5 -=2;
                else
                    return "NO";
            }
        }
        
    }
    return "YES";
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<check(arr, n)<<endl;
    }
	// your code goes here
	return 0;
}
*/
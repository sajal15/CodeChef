/*#include <iostream>
using namespace std;

int remainder(int a, int b)
{
    int rem;
    rem=a&b;
    return rem;
}
int main()
{
    int t;
    cin>>t;
    int arr1[t];
    int arr2[t];
    int result[t];
    for(int i=0; i<t; i++)
    {
        int element1,element2;
        cin>>element1>>element2;
        arr1[i]=element1;
        arr2[i]=element2;

    }
    for(int j=0; j<t; j++)
    {
        int n1=arr1[j];
        int n2=arr2[j];
        result[j]=remainder(n1,n2);
        cout<<result[j]<<endl;
    }

}*/
 #include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{ int t, a,b,x;

cin>>t;
while(t--)
{

    cin>>a>>b;
    x=a%b;
    cout<<x<<endl;
   
}
 
    return 0;
}

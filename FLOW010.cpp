//if condition sign of 'OR'
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;
        if(s=="B"||s=="b")
        cout<<"BattleShip"<<endl;
        if(s=="C"||s=="c")
        cout<<"Cruiser"<<endl;
        if(s=="D"||s=="d")
        cout<<"Destroyer"<<endl;
        if(s=="F"||s=="f")
        cout<<"Frigate"<<endl;
     }
}
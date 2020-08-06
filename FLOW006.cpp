#include<iostream>
using namespace std;
main()
 {
 	 int T;
 	 int a , a1,sum=0;
 	 cin>>T;
 	 for(int i=0; i<T; i++)
 	  {
 	  	 cin>>a;
 	  	 sum=0;
 	  	 while(a>0)
 	  	  {
 	  	  	 a1=a%10;
 	  	  	 a=a/10;
 	  	  	 sum += a1;
	      }
	      cout<<sum<<endl;
	   }
 }
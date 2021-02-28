#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int n;
   int p=1;
   cin>>n;
   for(int i=1;i<=n;i++){
       for(int j=n-1;j>=i;j--){
           cout<<" ";
       }
               p=1;   

       for(int j=0;j<i;j++){
           cout<<p;
           p++;
       }
       cout<<endl;
   }
    return 0;
}

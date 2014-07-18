#include<iostream>
#include<algorithm>
#include <math.h> 
using namespace std;
#define max(a,b) (a>b?a:b)
int main(){
int m;
freopen("12.txt","r",stdin);
cin>>m;
while(m--){
   int n;
   cin>>n;
   float a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];   
 sort(a,a+n);
 
 float sum=0,count=0;
 for(int i=n-1;i>=1;i--){
         if(a[i]>=1&&sum<20){
           sum+=2*sqrt(a[i]*a[i]-1);
           count++;
                    }
         }
 cout<<count<<endl;
           }

     
 
pause;


}

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n,m,tmp;
  scanf("%d%d",&n,&m);

	int a[n+1];
	  a[0]=0;

for(int i=1;i<n+1;i++){
	scanf("%d",&tmp);

 a[i]=a[i-1]+tmp;
}
  for(int i=0;i<m;i++)
  { int b,d;
 scanf("%d%d",&b,&d);

  if(b==1) printf("%d\n",a[d]);
  else
  {
	  printf("%d\n",a[d]-a[b-1]);
  }


  }

	return 0;
}


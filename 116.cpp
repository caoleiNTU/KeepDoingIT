#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
const int MAX=1000010;
int largest;
int data[MAX];
int LowBit(int num)
{
	return num&(-num);
}
void Plus(int pos,int value)
{
	while(pos<=largest)
	{
		data[pos]+=value;
		pos+=LowBit(pos);
	}
}
int Sum(int num)
{
	int sum=0;
	while(num>0)
	{
		sum+=data[num];
		num-=LowBit(num);
	}
	return sum;
}
int main()
{
	int N,M,v,s,e;
	char str[10];
	cin>>N>>M;
	largest=N;
	for(int i=1;i<=N;++i)
	{
		scanf("%d",&v);
		Plus(i,v);
	}
	
	for(int i=0;i!=M;++i)
	{
		scanf("%s%d%d",str,&s,&e);
		if(!strcmp(str,"QUERY")) printf("%d\n",Sum(e)-Sum(s-1));
		else Plus(s,e);
	}

}      

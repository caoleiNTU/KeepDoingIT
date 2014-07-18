 
#include<stdio.h>
#include <vector>
#include<algorithm>
#include<math.h>
using namespace std;

struct activ 
{
	int begin;
	int end;
};
bool cmp( activ a,activ b)
{
	return a.end<b.end;
}
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	scanf("%d",&n);
	while (n--)
	{
		int m;
		scanf("%d",&m);
		vector<activ> vec;
		for(int i=0;i<m;i++)
		{
			activ a;
			scanf("%d%d",&a.begin,&a.end);
			vec.push_back(a);
		}
		
		sort(vec.begin(),vec.end(),cmp);	
		int count=vec.size();
		int k=0;
		for (int i=1;i<vec.size();i++)
		{
			if(vec[i].begin <= vec[k].end) 
				count--;
			else k=i;
		}
		printf("%d\n",count);
	}
	
	return 0;
}        

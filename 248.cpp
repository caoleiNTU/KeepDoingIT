#include<iostream>
#include<algorithm>
using namespace std;
struct store{
  int xi;
  int fi;
  int ci;
  int cost;  //3?ê?′ú??éè???a-1 
       };
bool com(const store &a,const store &b){
  if(a.cost<b.cost) return true;
     
   return false;
     }
     
     
int main(){
    freopen("248.txt","r",stdin);
int num;
 cin>>num;
 
 while(num--){
   int k,e,n;
   cin>>k>>e>>n;
  store a[n];
   
   for(int i=0;i<n;i++){
     cin>>a[i].xi>>a[i].fi>>a[i].ci;
     a[i].cost=e-a[i].xi+a[i].ci;    
           }
           
   sort(a,a+n,com);
   
 //   for(int i=0;i<n;i++)
//    cout<<a[i].xi<<" "<<a[i].fi<<" "<<a[i].ci<<" "<<a[i].cost<<endl;               
               
 int sum=0;
  
    for(int i=0;i<n;i++){
           if(a[i].fi>=k)
			{
				sum=sum+a[i].cost*k;
	 
			    break;
			}else{ 
              	sum=sum+a[i].cost*a[i].fi;
              	k-=a[i].fi;
            }
 
 
}
cout<<sum<<endl;
}
return 0;
}

最优代码：
#include<stdio.h>
#include<algorithm>
using namespace std;
struct feed
{
	int pay;//**单位物品支付价钱**//
	int get;
}w[1001];
bool comp(feed x,feed y)//**按照各点的单位物品支付价钱从小到大排序，为贪心做准备**//
{
	if(x.pay<y.pay) return true;
	return false;
}
int main()
{
	int ncases,need,total,n,i,num,prize,sum;
	scanf("%d",&ncases);
	while(ncases--)
	{
		sum=0;
		scanf("%d %d %d",&need,&total,&n);//**need代表需要的总质量，total代表有在轴上有多少个点**//
		for(i=0;i<=n-1;i++)
		{
			scanf("%d %d %d",&num,&w[i].get,&prize);//**num代表点的编号，prize表示每买单位质量花的价钱**//
			w[i].pay=(total-num)+prize;//**计算每点每买单位质量需要花的钱**//
		}
		sort(w,w+n,comp);//**贪心，每次都取花费最少的**//
		for(i=0;i<=n-1;i++)
		{
			if(w[i].get>=need)
			{
				sum=sum+w[i].pay*need;
				break;
			}
			else
			{
				sum=sum+w[i].get*w[i].pay;
				need=need-w[i].get;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}        

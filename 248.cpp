#include<iostream>
#include<algorithm>
using namespace std;
struct store{
  int xi;
  int fi;
  int ci;
  int cost;  //3?��?�䨲??����???a-1 
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

���Ŵ��룺
#include<stdio.h>
#include<algorithm>
using namespace std;
struct feed
{
	int pay;//**��λ��Ʒ֧����Ǯ**//
	int get;
}w[1001];
bool comp(feed x,feed y)//**���ո���ĵ�λ��Ʒ֧����Ǯ��С��������Ϊ̰����׼��**//
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
		scanf("%d %d %d",&need,&total,&n);//**need������Ҫ����������total�������������ж��ٸ���**//
		for(i=0;i<=n-1;i++)
		{
			scanf("%d %d %d",&num,&w[i].get,&prize);//**num�����ı�ţ�prize��ʾÿ��λ�������ļ�Ǯ**//
			w[i].pay=(total-num)+prize;//**����ÿ��ÿ��λ������Ҫ����Ǯ**//
		}
		sort(w,w+n,comp);//**̰�ģ�ÿ�ζ�ȡ�������ٵ�**//
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

#include<iostream>
#include<algorithm>
 
#define MAX(a,b)(a>b?a:b)
using namespace std;
struct Ww{
       int l,w;
       bool f;
       };
       
 bool com(const Ww &a,const Ww &b){
  //if(MAX(a.l,a.w)<MAX(b.l,b.w)) return true;
  if(a.l<b.l) return true;
  if(a.l==b.l&&a.w<b.w) return true;
 
 
 return false;
   
}
/*
 //?��?��??��????��D?D����D
 int next(Ww a[],int n,int l,int w){
  for(int i=0;i<n;i++){
          if(a[i].f){
             if(a[i].l>l&&a[i].w>w){
                      a[i].f=false;
                  //    cout<<a[i].l<<" "<<a[i].w<<endl;
                      return i;              
                                    }        
                     
                     }
          }
   if(a[n-1].l==l&&a[n-1].w==w) return -2;
    return -1; //2??��?����???��??? 
 }
 
 
 
 //?��?���̨���????a��?��?����
 int gethead(Ww a[],int n){
    for(int i=0;i<n;i++)
    if(a[i].f) return i;
    
    return -1;
 } 
*/
       
int main(){
  //freopen("236.txt","r",stdin);
 int t,n,tmp;
 cin>>t;
 while(t--){   
 cin>>n;
  Ww a[n];
 for(int i=0;i<n;i++){
  cin>>a[i].l;     
  cin>>a[i].w; 
  a[i].f=true;    
                     }
                   
 sort(a,a+n,com);
 
 int minT=0;
 
 
         for(int i=0;i<=n-1;i++)//**��?����3��?��?��??��?��??-�䨮D?��?�䨮??o?��?**//  
        {  
            if(a[i].w!=0)//**��?1??a??��y??��D3???1y��?o��??�䨲??��D����??**//  
            {  
                tmp=a[i].w;  
                minT++;  
                for(int j=i+1;j<=n-1;j++)  
                {  
                    if(a[j].w>=tmp)  
                    {  
                        tmp=a[j].w;//**��?��???��y�����?��?D???��?��???��?��??��j?-?��?D����?�訢?��?��??��1?��|������???��?��??��**//  
                        a[j].w=0;//**????o?D����?����???a0��???3y**//  
                    }  
                }  
            }  
 
 /*
 while(1){
          
         int nexttmp=next(a,n,a[i].l,a[i].w);
         if(nexttmp==-2) {minT++;break;}  //��??-��?��??22?��? 
         a[i].f=false;
   if(nexttmp==-1){
                minT++;
             int tmp=gethead(a,n);       
             if(tmp==-1) break;    
             i=tmp;              
          }else{
          i=nexttmp;      
                }
                }
                */

}
     cout<<minT<<endl; 
}
return 0;
}


���Ŵ��룺

#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct mb
{
	int len;//**��**//
	int weight;//**����**//
}w[10001];
bool comp(mb x,mb y)//**���ճ����������������ͬ����������**//
{
	if(x.len<y.len) return true;
	if(x.len==y.len&&x.weight<y.weight) return true;
	return false;
}
int main()
{
	int s,n,i,j,count,t;
	scanf("%d",&s);
	while(s--)
	{
		memset(w,0,sizeof(w));//**������Ҫ����������**//
		count=0;
		scanf("%d",&n);
		for(i=0;i<=n-1;i++)
		{
			scanf("%d %d",&w[i].len,&w[i].weight);
		}
		sort(w,w+n,comp);
		for(i=0;i<=n-1;i++)//**��ʱ���ȡ������Ѿ���С�����ź���**//
		{
			if(w[i].weight!=0)//**��������û�г��ֹ�����������б��**//
			{
				t=w[i].weight;
				count++;
				for(j=i+1;j<=n-1;j++)
				{
					if(w[j].weight>=t)
					{
						t=w[j].weight;//**��һ�������������������������jѭ���б�֤��һ���ܹ������ľ�����**//
						w[j].weight=0;//**���ź���ı��Ϊ0�����**//
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

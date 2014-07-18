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
 //?°?ò??ò????óD?DòáD
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
    return -1; //2??ü?òμ???ò??? 
 }
 
 
 
 //?°?òμúò????aê?μ?í·
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
 
 
         for(int i=0;i<=n-1;i++)//**′?ê±3¤?è?￠??á?ò??-′óD?μ?′ó??o?á?**//  
        {  
            if(a[i].w!=0)//**è?1??a??êy??óD3???1y￡?oó??′ú??óD±ê??**//  
            {  
                tmp=a[i].w;  
                minT++;  
                for(int j=i+1;j<=n-1;j++)  
                {  
                    if(a[j].w>=tmp)  
                    {  
                        tmp=a[j].w;//**ó?ò???êy±￡′?×?D???á?μ???á?￡??új?-?·?D±￡?¤á?ò?′??ü1?′|àíμ???°?×??à**//  
                        a[j].w=0;//**????o?Dòμ?±ê???a0￡???3y**//  
                    }  
                }  
            }  
 
 /*
 while(1){
          
         int nexttmp=next(a,n,a[i].l,a[i].w);
         if(nexttmp==-2) {minT++;break;}  //ò??-μ?×??22?·? 
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


最优代码：

#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct mb
{
	int len;//**长**//
	int weight;//**重量**//
}w[10001];
bool comp(mb x,mb y)//**按照长度排序，如果长度相同则按重量排序**//
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
		memset(w,0,sizeof(w));//**首先需要将数组清零**//
		count=0;
		scanf("%d",&n);
		for(i=0;i<=n-1;i++)
		{
			scanf("%d %d",&w[i].len,&w[i].weight);
		}
		sort(w,w+n,comp);
		for(i=0;i<=n-1;i++)//**此时长度、重量已经从小到大排好了**//
		{
			if(w[i].weight!=0)//**如果这个数没有出现过，后面代码有标记**//
			{
				t=w[i].weight;
				count++;
				for(j=i+1;j<=n-1;j++)
				{
					if(w[j].weight>=t)
					{
						t=w[j].weight;//**用一个数保存最新清零的重量，在j循环中保证了一次能够处理的木棒最多**//
						w[j].weight=0;//**将排好序的标记为0，清除**//
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

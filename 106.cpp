#include<iostream>
#include<algorithm>
#include <cstdlib>
using namespace std;

struct Bag{
    int v;
    int w;
    Bag(int v_ = 0,int w_ = 0 ) : v(v_), w(w_){}
}u[1001];

 
bool comp(Bag x,Bag y)
{
 return x.v>y.v;
}


int main(){
    freopen("test.txt","r",stdin);
    int n;
    cin >> n;
    while(n--){
        int s;
        cin>>s;
        
        int m;
        cin >> m;
      for(int i=0;i<s;i++){
        cin>>u[i].v>>u[i].w;    
    }
    sort(u,u+s,comp);
         //   for(int i=0;i<s;i++){
   //    cout<<w[i].v<<" "<<w[i].w<<endl;    
   // }
  int maxvalue=0;
   for(int i=0;i<s;i++){
           while(u[i].w!=0){
            if(m>0) {
                 maxvalue+=u[i].v;
                 u[i].w--;
                 m--;   
                    }else break;
            }
           
           
           }
    cout<<maxvalue<<endl;
  
    

    }
      freopen("CON","r",stdin);
  system("pause");
    
}

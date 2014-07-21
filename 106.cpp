#include<iostream>
#include<vector>
using namespace std;

struct Bag{
    int v;
    int w;
    Bag(int v_ = 0,int w_ = 0 ) : v(v_), w(w_){}
    
    bool operator < (const Bag & a) const{
         return v < a.v;
    }
};

int main(){
    int n;
    cin >> n;
    while(n--){
        int s;
        cin>>s;
        
        int m;
        cin >> m;
        while(s--){
        vector<Bag> bags;

         
         
         }
         
        for(vector<Bag>::iterator iter = bags.begin(); iter!=bags.end(); iter++){
         
        }
         
 
    }
}

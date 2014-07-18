struct Rectrangle{
    int num;
    int length;
    int width;
    Rectrangle(int num_ = 0,int length_ = 0 , int width_ = 0) : num(num_), length(length_), width(width_){}
    bool operator < (const Rectrangle& a) const{
        if(num!=a.num) return num < a.num;
        else if(length!=a.length) return length< a.length;
        else return width < a.width;
    }
};

int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        set<Rectrangle> rect;
        for(int i = 0 ; i < m ; ++i){
            int num,length,width;
            cin >>num >> length >>width;
            if(length < width) swap(length,width);
            rect.insert(Rectrangle(num,length,width));
        }
        for(set<Rectrangle>::iterator iter = rect.begin(); iter!=rect.end(); iter++){
            cout<<iter->num<<" "<<iter->length<<" "<<iter->width<<endl;
        }
    }
}

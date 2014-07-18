#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
double r,x,y,width,height;
class Circle
{
public:
	Circle(double x,double r):x(x),r(r){}
	double Left() const{
		if(r*r-height*height/4<0) return x;return x-sqrt(r*r-(height*height/4));}
	double Right() const{if(r*r-height*height/4<0) return x;return x+sqrt(r*r-(height*height/4));}
	friend ostream & operator<<(ostream& out,const Circle& circle);
private:
	double x,r;
};
ostream & operator<<(ostream& out,const Circle& circle)
{
	out<<circle.x<<" "<<circle.r;
	return out;
}
struct CircleLess
{
	bool operator()(const Circle& c1,const Circle& c2)
	{
		return c1.Right()<c2.Right();
	}
};

int main()
{

	int m;
	cin>>m;
	while(m--)
	{
		int n;
		
		vector<Circle> Rs;
		cin>>n>>width>>height;
		Rs.reserve(n);
		
		
		while(n--)
		{
			cin>>x>>r;
			Rs.push_back(Circle(x,r));
		}
		sort(Rs.begin(),Rs.end(),CircleLess());
		vector<int> choosed;
		choosed.push_back(-1);
		double len=0;
		try{
			while(len<width)
			{
				int last=-1;
				for(vector<Circle>::size_type i=choosed.back()+1;i!=Rs.size();i++)
				{
					if (Rs[i].Left()<=len)
					{
						//cout<<Rs[i].Left()<<endl;
						last=i;
					}
				}
				if (last==-1) throw -1;
				else
				{
					choosed.push_back(last);
					len=Rs[last].Right();
				}
			}	
			cout<<choosed.size()-1<<endl;
		
		}catch(...)
		{
			cout<<0<<endl;
		}
	}

}                             

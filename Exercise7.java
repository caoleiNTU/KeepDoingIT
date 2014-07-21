import java.util.*;
//
public class Exercise7 {
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n!=0){
			int m=sc.nextInt();
			ArrayList<location> list=new ArrayList<location>();
			int minx=999,miny=999,maxx=-1,maxy=-1;
			for(int i=0;i<m;i++)
			{
			int tmpx=sc.nextInt();
			int tmpy=sc.nextInt();
			if(minx>tmpx) minx=tmpx;
			if(miny>tmpy) miny=tmpy;
			if(maxx<tmpx) maxx=tmpx;
			if(maxy<tmpy) maxy=tmpy;
			list.add(new location(tmpx,tmpy));
			}		
			int minvalue=9999999;
			for(int i=minx;i<=maxx;i++)
				for(int j=miny;j<=maxy;j++){
					location newp=new location(i,j);
					int tmpsum=0;
					for(location tmp:list){
						tmpsum+=count(newp,tmp);					
					}
					if(tmpsum<minvalue) minvalue=tmpsum;
				}
			
			System.out.println(minvalue);
					
			
			n--;
		}
	}
	public static int count(location l1,location l2){
		return Math.abs(l1.x-l2.x)+Math.abs(l1.y-l2.y);
		 
	}
	
}

class location{
	int x;
	int y;
	
	public location(int x,int y){
		this.x=x;
		this.y=y;		
	}
	
}

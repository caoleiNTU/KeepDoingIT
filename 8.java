import java.awt.Point;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class Main{

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n!=0){
		int m = sc.nextInt();
		ArrayList<Rect> list = new ArrayList<Rect>();

		for (int i = 0; i < m; i++) {
			Rect r = new Rect(sc.nextInt(), sc.nextInt(), sc.nextInt());
			list.add(r);
		}
		Collections.sort(list, new SortByReasons());
		delete(list);
 
		for (Rect tmp : list) {
			String str=tmp.toString();
			if(!str.equals(""))
					System.out.println(tmp);
			}
		n--;
	}
	}

	public static void delete(ArrayList<Rect> l) {
		ArrayList<Integer> record=new ArrayList<Integer>();
          for(int i=0;i<l.size();i++){
        	  for(int j=0;j<l.size();j++){
        		  if(i!=j){
        		  Rect out=l.get(i);
        		  Rect in=l.get(j);
        		  if(out.id==in.id&&out.width==in.width&&out.height==in.height){
        			  in.id=-1;
        			  in.width=-1;
        			  in.height=-1;
        		  } 
        		  }
        	  }
          }
	}
 
}
 
class SortByReasons implements Comparator {
	public int compare(Object obj1, Object obj2) {
		Rect rect1 = (Rect) obj1;
		Rect rect2 = (Rect) obj2;
		if (rect1.id > rect2.id)
			return 1;
		else 
		if(rect1.id==rect2.id){
			if(rect1.width>rect2.width) return 1;
			else
				if(rect1.width==rect2.width){
					if(rect1.height>rect2.height) return 1;
					else  return 0;
				}else return 0;
		}else{
			return 0;}
 
	}
}

class Rect{
	int width,height;
	int id;
 
	public Rect(int id,int width,int height){
		this.id=id;
		this.width=width>height?width:height;
		this.height=width<height?width:height;
	}
	
	public String toString(){
		if(id>0)
		return (id+" "+width+" "+height);	
		else
		return "";
	}
}

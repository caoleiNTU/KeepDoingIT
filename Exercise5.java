import java.util.*;

public class Exercise5 {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n!=0){
			String a=sc.next();
			String b=sc.next();
		int count=0;
			for(int i=0;i<b.length();i++){
				String tmp="";
				if(i+a.length()<=b.length())
				tmp=b.substring(i,a.length()+i);
				if(tmp.equals(a)) count++;
			}
			System.out.println(count);
			n--;
		}
	}
}

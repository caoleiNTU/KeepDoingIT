import java.util.ArrayList;
import java.util.Scanner;


public class Exercise11 {

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n!=0){
			int m=sc.nextInt();
			ArrayList<Integer> oddlist=new ArrayList<Integer>();
			ArrayList<Integer> evenlist=new ArrayList<Integer>();
			for(int i=1;i<m+1;i++)
				if(i%2==0) evenlist.add(i);
				else
					oddlist.add(i);
			
			for(int tmp:oddlist) System.out.print(tmp+" ");
			System.out.println();
			for(int tmp:evenlist) System.out.print(tmp+" ");
			
			n--;
		}
	}
	
	
}

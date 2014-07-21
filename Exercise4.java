import java.util.*;

public class Exercise4 {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n!=0){
			String tmp=sc.next();
			char[] ctmp=tmp.toCharArray();
			Arrays.sort(ctmp);
			
			for(char c:ctmp) System.out.print(c+" ");
			System.out.println();
			n--;
		}
	}
}

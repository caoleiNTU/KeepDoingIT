import java.util.Scanner;


public class Exercise13 {
  public static void main(String args[]){
	  Scanner sc=new Scanner(System.in);
	  int m=sc.nextInt();
	  while(m!=0){
		  int n=sc.nextInt();
		  System.out.println(f(n));
		  
		  m--;
	  }
  }
  
  public static int f(int n){
	  if(n==1 || n==2) return 1;
	  if(n>2)
	  return f(n-1)+f(n-2);
	  else
		  return -1;
  }
  
}

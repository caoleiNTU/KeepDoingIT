import java.util.*;
public class Main {
   public static void main(String args[]){
	   Scanner cin=new Scanner(System.in); 
	   int m,n;
	   m=cin.nextInt();
	    while(m>0){
	    n=cin.nextInt();
	    int a[]=new int[n];
	    int b[]=new int[n];
	    boolean c[]=new boolean[n];
	    for(int i=0;i<n;i++){  	 
	     a[i]=cin.nextInt();
	     b[i]=cin.nextInt();
	    }
	    boolean flag=false;
        for(int j=0;j<n;j++){
	    for(int i=0;i<n-1;i++)  	 
		     {
		    	 if(b[i]>b[i+1]) {
		    		 int one=a[i];
		    		 int two=b[i];
		    		 a[i]=a[i+1];
		    		 b[i]=b[i+1];
		    		 a[i+1]=one;
		    		 b[i+1]=two;
		    		 flag=true;
		    	 }
		     }
	    if(!flag) break;
        }
 
	       int count=1,p=b[0];
	     
	      for(int i=1;i<n;i++)
	       if(p+1<=a[i]&&!c[i]) {count++;p=b[i];a[i]=-1;c[i]=true; }
	       System.out.println(count);
	   m--;
	               }
   }
}
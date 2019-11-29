import java.lang.*;
import java.util.*;


public class Switch {
	
	public static void main(String[] var)
	{
		int choice=0;
		System.out.println("Enter your choice : \t 1) Print Fibonacci Series \t 2) Find Sum of a digit \t ");
		Scanner sc = new Scanner(System.in);
		choice=sc.nextInt();
		switch(choice){

			case 1:
			{
			   System.out.println("The first 10 digits of fibonacci series are : ");
               int a=0,b=1,c=0,i=0;
               System.out.println(a+" ");
               System.out.println(b+" ");
               while (i<8)
               {
               	c=a+b;
               	a=b;
               	b=c;
               	System.out.println(c);
               	i=i+1;
               }
               break;

			}

			case 2:
			{
  
				int num=0,sum=0,n=0;
				System.out.println("Enter the number to find sum for  :");
                num=sc.nextInt();		        
		        while (num>0)
		        {
                   n=num%10;
                   sum=sum+n;
                   num=num/10;
		        }
		        System.out.println("The total sum of digits is : "+sum);

                break;

			}

			default: System.out.println("Invalid choice");
		}
	}


}
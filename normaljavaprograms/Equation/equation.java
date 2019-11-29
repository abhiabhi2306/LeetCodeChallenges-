import java.lang.*;
import java.util.*;
import java.lang.Math; 

public class equation {


    static int factorial(int n) 
        { 
           if (n == 0) 
              return 1; 
          
           return n*factorial(n-1); 
        } 
	
	public static void main(String[] var)
	{
		int choice=0;
		System.out.println("Enter your choice : \t 1) First Equation \t 2) Second Equation \t ");
		Scanner sc = new Scanner(System.in);
		choice=sc.nextInt();

		switch(choice){

			case 1:
			{
			   System.out.println("Please input N: ");
			   int n=choice=sc.nextInt();
               int series=0,sum=0,i=0;
               while (i<n)
               {
               	series=series+i;
               	i++;
               	sum=sum+series;

               }
               System.out.println("The sum is "+sum);

               break;


			}

			case 2:
			{
  
				System.out.println("Please input N : ");
			    int n=choice=sc.nextInt();
			    System.out.println("Please input A : ");
			    int a=choice=sc.nextInt();
			    double sum=0;
			    int factorial=0,i=0;
			    while (i<n)
			    {
			       sum=sum+(Math.pow(a,i)/factorial(i));
			       i=i+1;
			    }

			    System.out.println("The sum is "+sum);


                break;

			}

			default: System.out.println("Invalid choice");
		}
	}





}
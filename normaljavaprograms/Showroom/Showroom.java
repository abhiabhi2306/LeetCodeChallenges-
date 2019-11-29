import java.lang.*;
import java.util.*;




public class Showroom 
{

	public static void main(String[] var)
	{
	   Showroom s1 = new Showroom();
	   s1.input();
	   s1.calculate();
	   s1.show();
	}



	String name;
	long mobno;
	double cost,dis,amount;


	Showroom()
	{
		name="";
		mobno=0;
		cost=0.0;
		dis=0.0;
		amount=0.0;
	}

	void input() {

		Scanner s = new Scanner(System.in);
		System.out.println("Enter your name :");
        name=s.next();
        System.out.println("Enter your mobile number :");
        mobno=s.nextInt();
        System.out.println("Enter the amount :");
        amount=s.nextDouble();
	}


	void calculate() {

		if (amount<10000) 
		{
			dis=amount*0.05;
		}
		else if (amount<10000 && amount>20000)
		{
			dis=amount*0.10;
		}
		else 
		{
			dis=amount*0.15;
		}
	}


	void show() {
		System.out.println("Name of Customer : "+name+" \n Mobile Number : "+mobno+ " \n Total amount :"+(amount-dis));
	}

}
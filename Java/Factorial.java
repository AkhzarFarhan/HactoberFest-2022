import java.util.Scanner;
public class factorial {
	public static void main(String[] args) {
		int number;
		System.out.println("Java program to find factorial of a number");
		//read the number using scanner class
		System.out.println("Enter a number to find its factorial:");
		Scanner stdin=new Scanner(System.in);
		number=stdin.nextInt();
		long  factorial=1;
		//finds factorial
		for(int i=1; i<=number ;  i++)
		{
			factorial=factorial*i;
		}
		System.out.println("Factorial of "+number+" is "+factorial);
	}

}

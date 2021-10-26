package FrequentPrograms;

import java.util.Scanner;

public class ArmstrongNumberUsingWhile {
	private static Scanner sc;
	
	public static void main(String[] args) {
		int Number, Temp, Reminder, Times = 0;
		double Sum = 0;
		sc = new Scanner(System.in);		
		System.out.println("\n Please Enter number to Check for Armstrong: ");
		Number = sc.nextInt();

		//Helps to prevent altering the original value
		Temp = Number;
		while (Temp != 0) {
			Times = Times + 1;
			Temp = Temp / 10;
		   }
		   
		Temp = Number;
		while( Temp > 0)  {
			Reminder = Temp %10;
		    Sum = Sum + Math.pow(Reminder, Times);
		    Temp = Temp /10;
		   }
		System.out.format("\n Sum of entered number is = %.2f", Sum);
		
		if (Sum == Number) {
			System.out.format("\n% d is a Armstrong Number", Number);
		}
		else {
			System.out.format("\n% d is NOT a Armstrong Number", Number);
		}
	}
}

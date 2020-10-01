import java.util.Scanner;

public class PrimeSieve {
    public static void main(String[] args) {
        int n ;
        System.out.print("Enter the number upto which you have to find prime numbers: ");
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();

        int[] arr = new int[n];

        for(int i = 2; i< n; i++){
            for(int j = i; j *i < n; j++){
                if(arr[i*j] == 0)
                    arr[i * j] = 1;
            }
        }

        for(int i = 2; i< n;i++){
            //System.out.println("ran");
            if(arr[i] == 0)
                System.out.print(i+ " ");
        }

    }
}

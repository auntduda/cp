import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        long n = ler.nextInt();

        System.out.println(1+((n*(n-1)/2)+((n*(n-1)*(n-2)*(n-3))/24)));
    }
}
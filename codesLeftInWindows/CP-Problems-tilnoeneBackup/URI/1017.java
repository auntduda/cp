import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);
        int a = ler.nextInt(), b = ler.nextInt();

        System.out.printf("%.3f%n", a*b/12.0);
    }
}
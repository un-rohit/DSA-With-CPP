import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        Scanner rk = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int num = rk.nextInt();

        if (num % 2 == 0) {
            System.out.println(num + " is an even");
        } else {
            System.out.println(num + " is an odd");
        }
    }
}

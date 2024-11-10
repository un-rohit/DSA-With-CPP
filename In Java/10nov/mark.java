import java.util.Scanner;

public class mark {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("ENter the marks: ");
        int marks = input.nextInt();
        if (marks <= 100 && marks > 96) {

            System.out.println("A+");

        } else if (marks < 95 && marks > 91) {
            System.out.println("A");
        }
        else if (marks < 90 && marks > 81) {
            System.out.println("B+");
        } else if (marks < 80 && marks > 71) {
            System.out.println("B");
        } else if (marks < 70 && marks > 61) {
            System.out.println("C+");
        } else if (marks < 60 && marks > 51) {
            System.out.println("C");
        } else if (marks < 50 && marks > 35) {
            System.out.println("D");
        } else if (marks < 35) {
            System.out.println("E");
        }
    }
}

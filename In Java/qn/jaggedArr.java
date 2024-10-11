import java.util.Scanner;

public class jaggedArr {

    public static void main(String[] args) {
        int rows, cols;
        Scanner sc = new Scanner(System.in);
        System.out.println("Rows = ");
        rows = sc.nextInt();
        int jaggedArr[][] = new int[rows][];
        for (int i = 0; i < rows; i++) {
            System.out.println("cols  = ");
            cols = sc.nextInt();
            jaggedArr[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                System.out.println("Enter col " + (j + i) + " Value");
                jaggedArr[i][j] = sc.nextInt();

            }
        }

        for (int i = 0; i < jaggedArr.length; i++) {
            for (int j = 0; j < jaggedArr[i].length; j++) {
                System.out.println(jaggedArr[i][j] + "\t");

            }
            System.out.println();
        }
        sc.close();

    }
}

import java.util.Scanner;

public class switchh {
    
    public static void main(String args[]) {
        Scanner a= new Scanner(System.in);
        System.out.println("Ener the Number ");
        int input = a.nextInt();
        switch (input) {
            case 1:
                System.out.println("Monday");
                break;
                case 2:
                System.out.println("tueday");
                break;

                case 3:
                System.out.println("Wednesday");
                break;

                case 4:
                System.out.println("Thusday");
                break;
                case 5:
                System.out.println("Friday");
                break;
                case 6:
                System.out.println("Saturday");
                break;
                case 7:
                System.out.println("Sunday");
                break;
            default:
                break;
        }
    }
}

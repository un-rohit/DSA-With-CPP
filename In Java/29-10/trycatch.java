package Java.error;
import java.lang.ArithmeticException;

 class trycatch {
    public static void main(String[] args) {
        System.out.println("Hello Class");
        int a = 10, b = 10, c;
        try {
            c = a / b;
            if (c == 1) {
                throw new ArithmeticException("Wrong Input");
            }
        } catch (Exception e) {
            System.out.println("outer e");
        }
    }
}

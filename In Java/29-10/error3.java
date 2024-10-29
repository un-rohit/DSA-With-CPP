package Java.error;

public class error3 {
    int fun() throws ArithmeticException{
        int a=10, b=0, c;
        c=a/b;
        return c;
    }

    public static void main(String[] args) {
        error3 obj=new error3();
        try {
            obj.fun();
        } catch (Exception e) {
            // TODO: handle excedwf cxption
            System.out.println("this is main catch");
            System.out.println("end");
        }
    }
}

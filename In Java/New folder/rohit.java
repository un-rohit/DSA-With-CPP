package Java.error;

public class rohit {
    public static void main(String[] args) {
        System.out.println("Hello, Rohit!");
        final int a = 10;
        final int b = 0;
        int c = 0;
        try {
            c = a / b;
        } catch (Exception e) {
            // TODO: handle exception
            System.out.println("Error in the statement");
        }
        System.out.println(b);
        System.out.println("bye class");''
    }
}
int n = 10; // Number of Fibonacci numbers to generate
int[] fibo = new int[n];
fibo[0] = 0;
fibo[1] = 1;

for (int i = 2; i < n; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
}

System.out.println("Fibonacci Series:");
for (int i = 0; i < n; i++) {
    System.out.print(fibo[i] + " ");
}

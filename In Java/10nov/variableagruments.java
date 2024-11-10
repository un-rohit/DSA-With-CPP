public class variableagruments {

    void funn(int a, int b)
    {
        System.out.println("Sum="+(a+b));
    }

    void funn(int a, int b)
    {
        System.out.println();
    }
}

public static void main(String[] args) {
    System.out.println("Hello");
    variableagruments sc= new variableagruments();
    sc.funn(10,52,25f);

}
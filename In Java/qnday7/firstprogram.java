public class firstprogram {
    static int c = 30;
    float b=0.6f;
    void fun()
    {
        float a =.6f;
        float result=a+b;
        System.out.println(result);
        c++;
        b++;
        a++;

    }
    public static void main(String[] args) {
        firstprogram m=new firstprogram();
        m.fun();
        m.fun();
        m.fun();
    }
    
    
}

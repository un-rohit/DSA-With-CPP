public class circle {

    void circless(float r) {

        float circle = (r * r) * 3.14f;
        System.out.println(circle);
    }

}

public static void main(String[] args)
{
    circle sc =new circle();
   sc.circless(7);

}
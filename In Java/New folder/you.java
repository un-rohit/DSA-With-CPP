interface A {
    int rollno = 1220202;
    void fun();
}

class B implements A {
    public void fun() {
        System.out.println("This is interface");
    }
}

public class you {
    public static void main(String[] args) {
        B obj = new B();
        obj.fun();
        System.out.println("Roll number: " + A.rollno);
    }
}

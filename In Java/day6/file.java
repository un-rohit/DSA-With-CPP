package Java.error;

import java.io.Console;

public class file {
    public static void main(String[] args) {
        Console c = System.console();
        System.out.println("enter the password");
        char[] ch = c.readPassword();
        String pass = String.valueOf(ch);
        System.out.println("password is " + pass);
    }
}
 

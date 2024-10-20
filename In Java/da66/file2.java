package Java.error;

import java.io.File;

public class file2 {
    
    public static void main(String[] args) {
        try {
            File f0 = new File("text.txt");
            if (f0.createNewFile()) {
                System.out.println("File " + f0.getName() + " is created successfully");
            } else {
                System.out.println("File already exists in the directory");
            }
        } catch (Exception e) {
            // TODO: handle exception
            System.out.println("An unexpected Error occurred");
            e.printStackTrace();
        }
    }
}

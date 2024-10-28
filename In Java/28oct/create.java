import java.io.File;
import java.io.FileWriter;
import java.util.Scanner;

public class create {

    public static void main(String[] args) {
         //code to create a file
        // File myFile = new File("create.txt");
        // try {
        //     myFile.createNewFile();

        // } catch (Exception e) {
        //     // TODO: handle exception
        //         System.out.println("Unable to create this file");
        // }

        // // code to write in file
        
        // try {
        //         FileWriter fileWriter = new FileWriter("create.txt");
        //         fileWriter.write("This is our first file form this java language\n now bye");
        //         fileWriter.close();
        //     } catch (Exception e) {
        //         // TODO: handle exception
            
        //         e.printStackTrace();

            
        //     }


            //reading a file
            File myFile =new File("create.txt");
            
            try {
                Scanner sc = new Scanner(myFile);
                while (sc.hasNextLine()) {
                    String line =sc.nextLine();
                    System.out.println(line);
                    
                }
                sc.close();
                
            } catch (Exception e) {
                // TODO: handle exception
                e.printStackTrace();
            }
    }
}
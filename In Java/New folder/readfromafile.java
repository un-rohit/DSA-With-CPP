import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

import javax.xml.validation.SchemaFactoryConfigurationError;

public class readfromafile {
    public static void main(String[] args) {
        try {
            File f1 =new File("C:/Users/unroh/OneDrive/Desktop/Java/Java/error/read.txt");
            Scanner dataReader = new Scanner(f1);
            while (dataReader.hasNextLine()) {
                String fileData = dataReader.nextLine();
                System.out.println(fileData);

            }
            dataReader.close();
        } catch (FileNotFoundException e) {
            System.out.println("unexpected errir occured ");
            e.printStackTrace();
        }
    }
}

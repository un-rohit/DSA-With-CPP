import java.io.FileWriter;
import java.io.IOException;



public class writeafile {

    public static void main(String[] args) {
        
        try {
            FileWriter fwrite = new FileWriter("text.txt");
            fwrite.write("A learned location used to store related information is referred to as a File.");
            fwrite.close();
            System.out.println("Content is successfully written to the file.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
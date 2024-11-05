import java.util.Scanner;

class RBI {
    public void ROI() {
        System.out.println("RBI ROI");
    }
}

class SBI extends RBI {
    public void ROI() {
        System.out.println("SBI interest rate: 7%");
    }
}

class ICICI extends RBI {
    public void ROI() {
        System.out.println("ICICI interest rate: 6.5%");
    }
}

class HDFC extends RBI {
    public void ROI() {
        System.out.println("HDFC interest rate: 6.75%");
    }
}

public class interfface {
    public static void main(String[] args) {
        RBI r = new SBI();
        r.ROI();
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the rate of interest:");
        
        int userROI = sc.nextInt();
        
        System.out.println("User entered rate of interest: " + userROI);
    }
}


public class wrapper {

    public static void main(String[] args) {

        int numCoffees = Integer.parseInt(args[0]);
        int numDays = Integer.parseInt(args[1]);
        double pricePerCoffee = Double.parseDouble(args[2]);

        double expance = numCoffees * numDays * pricePerCoffee;
        System.out.println(" Total expance"+ expance);

    }
}

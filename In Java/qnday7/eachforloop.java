public class eachforloop {
    public static void main(String[] args) {
        int num[]={1,2,3,4,5};
        int sum =0;
        for (int i : num) {
            
            if (num[i]%2==0) {
                System.out.println(num[i]+" is an even");
            }
            else {
                System.out.println(num[i]+"is  an odd");
            }
        }
    }
}

import java.math.MathContext;
import java.math.BigDecimal;

public class bigDeci {
	public static void main(String[] args) {
        MathContext aa =new MathContext(6,ROUND_UP);
        BigDecimal bb = new MathContext(5);
		BigDecimal aa= new BigDecimal("321456534451322146845653245.654265451334");
		BigDecimal bb= new BigDecimal(31231231);
		BigDecimal result=aa.add(bb);
		
		System.out.println(result);
	}
}
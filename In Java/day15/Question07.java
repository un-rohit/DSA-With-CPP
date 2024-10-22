Write a class ElementCheck with a public method elementFinder that takes one parameter arr of type int[] and return true if the first and last elements of the arr are same else return false. The return type of elementFinder should be boolean.

Assumptions:
arr is never null
true
Cmd Args : 1 2 3 4
false

package q11055;

public class ElementCheck {
	
/**
 * Find first and last elements of the array are same are not
 * 
 * @return true if both are same else return false
 */
 

	public boolean elementFinder(int[] arr) {
		
		//Write your code here
		if(arr[0]==arr[arr.length-1]){
			return true;
		}else{
			return false;
			
		}
		
	}
}
/* A file is given you have to count string of length of > 10 and also which is most occured string. 
 * @author  : ABHINAV GUPTA
 */
package stringBst;

import java.io.FileNotFoundException;
import java.util.Scanner;
public class Tree {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner cin = new Scanner(System.in);
		String name = cin.nextLine();
		Node a = new Node();
		try {
			a.files(name);
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}

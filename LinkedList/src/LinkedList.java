import java.util.HashMap;
import java.util.Scanner;
public class LinkedList {
	public static void main(String[] args) {
		int choice;
		char value;
		HashMap<String, String> h = new HashMap<String, String>();
		h.entrySet();
		LinkedListDS ds = new LinkedListDS();
		Scanner s = new Scanner(System.in);
		do{
			choice = s.nextInt();
			switch(choice)
			{
			case 1:
				value=s.next().charAt(0);
				ds.insert(value);
				break;
			case 2:
				ds.printList();
			}
			
		}while(choice!=5);
		
	}
	
	

}

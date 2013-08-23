import java.util.Scanner;


public class Tester {
	public static void main(String[] args) {
		BST ds = new BST();
		Scanner s = new Scanner(System.in);
		int choice = s.nextInt();
		int value;
		
		while(choice!=9)
		{
		switch(choice)
			{
			case 1: value=s.nextInt();
				ds.insert(value);
				break;
			case 2: value = s.nextInt();
				ds.delete(value);
				break;
			case 3:	ds.inorder(ds.root);
				break;
			case 4:	ds.preorder();
				break;
			case 5:	ds.postorder();
				break;
			case 6: value = ds.amazon(ds.root);
			System.out.println(value);
			
				break;
			default:break;	
		
				
			}
		choice=s.nextInt();
		}
		
		
		
		
		
		
	}

}

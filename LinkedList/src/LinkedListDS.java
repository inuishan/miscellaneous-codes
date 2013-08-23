
public class LinkedListDS {
	Node start;
	public LinkedListDS() {
		// TODO Auto-generated constructor stub
		start = null;
	}
	public void insert(char value)
	{
		Node newNode = new Node();
		Node temp = start;
		newNode.setX(value);
		newNode.setNext(null);
		if(start==null)
			start = newNode;
		else{
			while(temp.getNext()!=null)
			{
				temp = temp.getNext();
			}
			temp.setNext(newNode);
		}
	}
	public void printList()
	{
		Node temp = start;
		while(temp!=null)
		{
			System.out.print(temp.getX()+"-->");
			temp = temp.getNext();
		}
	}
	

}

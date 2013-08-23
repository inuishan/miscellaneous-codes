
public class BST {
	public Node root;
	public BST() {
		// TODO Auto-generated constructor stub
		root = null;
	//	root.parent = null;
	}
	public void insert(int value)
	{
		Node nNode = new Node();
		nNode.x = value;
		nNode.lc = null;
		nNode.rc = null;
		if(root==null)
		{
			root = nNode;
		}
		else{
			Node temp=root;
			Node parent=temp;
			while(temp!=null)
				{
				parent=temp;
				if(value<temp.x)
					{
					temp=temp.lc;
					}
				else{
					temp=temp.rc;
					}
				}
			if(value<parent.x)
			{
				parent.lc=nNode;
				nNode.parent=parent;
			}
			else{
				parent.rc=nNode;
				nNode.parent=parent;
			}
			
		}
	}
	public int delete(int value)
	{
	int found = 0;
	Node temp = root;
	Node parent = temp;
	while(temp!=null)
	{
		parent=temp;
		if(temp.x==value)
		{
			found=1;
		}
		else if(temp.x<value)
		{
			temp=temp.rc;
		}
		else
		{
			temp=temp.lc;
		}
	}
	if(temp==root)
	{	//you cant delete a root
		return -1;
	}
	if(temp.lc==null&&temp.rc==null)
	{
		if(parent.lc==temp)
			parent.lc=null;
		else parent.rc=null;
	}
	else if(temp.lc==null||temp.rc==null)
	{
		if(parent.lc==temp)
		{
			
		}
	}

	
	
	
	
	
	
	return found;	
	}
	public void inorder(Node node)
	{
		if(node!=null)
		{
			inorder(node.lc);
			System.out.println(node.x);
			inorder(node.rc);
		}
	}
	public void preorder()
	{
		
	}
	public void postorder()
	{
		
	}
	public int amazon(Node x)
	{
		if(x!=null)
		{
		return x.x+max(amazon(x.lc),amazon(x.rc));	
		}
		return 0;
	}
	private int max(int a, int b)
	{
		int x;
		x=(a>b)?a:b;
		return x;
	}
}

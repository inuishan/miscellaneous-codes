import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		//System.out.print("sda");
		int t,n,cost,ans;
		t=s.nextInt();
		while((t--)>0)
		{
			int p_val,r_val;
			ans=0;
			n=s.nextInt();
			cost=s.nextInt();
			ArrayList<Integer> list = new ArrayList<Integer>();
			for(int i=0;i<n;i++)
			{
			 p_val = s.nextInt();
			 r_val = cost-p_val;
			 	if(list.contains((Integer)r_val))
			 	{
				 ans++;
				 list.remove((Integer)r_val);
			 	}
			 	else list.add((Integer)p_val);
				
			}
			Iterator<Integer> iterator = list.iterator();
			int i=0;
			int p_val2,r_val2;
			while(iterator.hasNext())
			{
				//int x = iterator.next();
				//iterator.
				p_val2 = iterator.next();
				r_val2 = cost-p_val2;
				 	if(list.contains((Integer)r_val2))
				 	{
					 ans++;
					 try{
					// list.remove((Integer)r_val2);
					 }
					 catch(Exception e)
					 {
						 System.out.println("e1");
					 }
					 
				 	}
				 	
				 	
				 	
				 	try{
				 		//list.remove((Integer)p_val2);
						 }
						 catch(Exception e)
						 {
							 System.out.println("e2");
						 }
				 	
				
			}
			if(t==0)
			System.out.print(ans);
			else System.out.println(ans);
			
		}
	}

}

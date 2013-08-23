import java.util.Random;
public class IPL1generator{
	public static void main(String[] args) {
		Random ran = new Random();
		// System.out.println("Hi");
		int t = ran.nextInt(1000)+1;
		System.out.println(t);
		while(t-->0)
		{
			ran = new Random();
			int x = ran.nextInt(20)+1; //over
			System.out.print(x+".");
			if(x!=20){
			ran = new Random();
			x = ran.nextInt(6);	//balls
			System.out.print(x+" ");}
			else System.out.print("0 ");
			ran = new Random();
			int target = ran.nextInt(301);  //taget
			int myscore = ran.nextInt(target+1);
			System.out.print(myscore+"/");
			ran = new Random();
			x = ran.nextInt(11); //wickets
			System.out.print(x+" ");
			//x=ran.nextInt(301);
			System.out.print(target+" ");
			x=ran.nextInt(100);
			x++;
			System.out.println(x);
		}

	}
}
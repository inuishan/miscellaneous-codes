import java.util.Scanner;


public class Solution {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t-->0)
		{
			int n = s.nextInt();
			if(n==1)
			{
				System.out.println(3);
			}
			
			
			else{
			
			String binary = Integer.toBinaryString(n);
			//System.out.println(binary);
			char[] str = binary.toCharArray();
			/*for(int i=0,j=arr.length;(i<=arr.length/2&&j>=arr.length/2);i++,j--)
			{
			arr[j]	
			}*/
			
			//scanf("%s",str);
			int flag=1;
			int frst=0;
			int sec=str.length-1;
			while(frst < sec)
			{
			if(str[frst]<str[sec])
			flag=1;
			else if(str[frst]>str[sec])
			flag=0;
			str[sec]=str[frst];
			frst++;
			sec--;
			}
			if(flag==1){
			//System.out.println(frst);
				
			while(frst<=str.length-1&&str[frst]=='1' && sec!= -1)
			{
			str[frst]='0';
			str[sec]='0';
			frst++;
			sec--;
			}
			if(sec == -1)
			{
			//printf("1");
			str[frst-1]='1';
			}
			else
			{
			str[frst]++;
			if(frst!=sec)
			str[sec]++;
			}
			}
			String num = str.toString();
			//System.out.println(str);
			//System.out.println(str.length);
			int result=0,powo=0;
			for(int x=str.length-1;x>=0;x--)
			{
				//System.out.println(str[x]);
				//System.out.println(powo);
				int mul = (int) Math.pow(2, powo++);
			//	System.out.println("mul="+mul);
				//System.out.println("value"+str[x]);
				String tempo = ""+str[x];
				int temp = Integer.parseInt(tempo);
				//System.out.println("temp"+temp);
				int add = temp*(int)mul;
				//System.out.println("add="+add);
				//System.out.println("result="+result);
				result = result + add;
				//System.out.println(result);
			}
			System.out.println(result);
			}
          
			}
			
			
			
				
		
	}

}

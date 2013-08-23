import java.math.BigInteger;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int t=s.nextInt();
		HashMap<Integer, Long> h = new HashMap<Integer, Long>();
		while(t-->0)
		{
			int n=s.nextInt();
			if(h.containsKey(n))
				System.out.println(h.get(key))
			
		}
		
		public BigInteger func(int n){
			
		}
	}
	
import division
t = input()
memo = {}
def func(x):
    try:
		return memo[x]
    except KeyError:
		memo[x] = 9 * (10 ** (x-1))/x
		return memo[x]

def otherfunc(x):
    z = 0
    y = x
    while(x):
		z += func(x)
		x = x-1
    print '%.6f' % (z/func(y))

for i in range(t):
     otherfunc(input())
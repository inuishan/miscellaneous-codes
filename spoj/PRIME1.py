import math
def isPrime(n):
	flag=0
	for i in xrange(3,int(math.sqrt(n)+1),2):
		if(n%i==0):
			flag=1
	if(flag==0):
		print n
	canMul(n)			

def canMul(k):
	i=2
	while k*i<=n:
		dic[k*i]=3
		i+=1

t=int(raw_input())
while t:
	t-=1
	dic={}
	# m=int(raw_input())
	# n=int(raw_input())
	m,n=map(int,raw_input().split())

	if m==2 and n==2:
		print 2
		continue
	if m==1:
		m+=1
	if m==2:
		m+=1		
	for i in xrange(m,n):
		if i%2!=0:
			if i not in dic:
				isPrime(i)

from __future__ import division
t = input()
while t>0:
	l,b = map(int,raw_input().split(' '))
	# print t,l,b
	mi = l
	if b<mi:
		mi = b
	for x in range(mi,0,-1):
		# print x
		n = l/x
		# print n
		m = b/x
		if (n-int(n)==0) and (m-int(m)==0):
			print int(n*m)
			break
				
	t-=1
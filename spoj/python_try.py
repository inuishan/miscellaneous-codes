# x = (raw_input());
from itertools import repeat
#some preprocessing
# glo_d = [[] for i in repeat(None, 2000)]
test_case = int(raw_input())
for i in range(test_case):
	d = [0]*2000
	glo_d = [[] for i in repeat(None, 2000)]
	num_bugs,interactions = map(int,raw_input().split())
	for j in range(interactions):
		bug1,bug2 = map(int,raw_input().split())
		glo_d[bug1].append(bug2)
	for j in range(num_bugs):
		#APPLYING BFS 0 means undiscovered, 1 means set 1, 2 means set 2
		for elem in glo_d[j]:
			




	

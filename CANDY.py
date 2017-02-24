n = int(raw_input())
while n!=-1:
	temp = []
	res = 0
	for i in xrange(n):
		temp.append(int(raw_input()))
	if sum(temp)%n != 0:
		print '-1'
	else:
		for i in temp:
			if i<sum(temp)/n:
				res+=sum(temp)/n - i
		print res
	n = int(raw_input())
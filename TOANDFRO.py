n=int(raw_input())
while(n!=0):
	res = []
	res1,result = [],''
	temp = raw_input()
	for i in temp:
		res1.append(i)
		if len(res1)%n==0:
			res.append(res1)
			res1=[]
	for i in xrange(len(res)):
		if i%2 == 1:
			res[i]=res[i][::-1]
	for i in xrange(n):
		for j in xrange(len(res)):
			result += str(res[j][i])
	print result
	n=int(raw_input())
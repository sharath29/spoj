def factorial(n):
	l=n/2
	i=1
	sum1=0
	while(l!=0):
		sum1 += n/(5**i)
		i+=1
		l = n/(5**i)
	return sum1

n=raw_input()
for i in xrange(int(n)):
	temp = raw_input()
	print factorial(int(temp))


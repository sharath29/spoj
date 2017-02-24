def factorial(n):
	return reduce(lambda x,y:x*y,range(2,n+1))

n=raw_input()
for i in xrange(int(n)):
	temp=raw_input()
	print factorial(int(temp))
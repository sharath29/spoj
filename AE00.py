n=int(raw_input())
sum1=n
for j in xrange(2,int(n**0.5)+1):
	for i in xrange(j,n+1):
		if i*j<=n:
			sum1+=1

print sum1
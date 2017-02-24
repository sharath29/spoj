while(True):
	n=float(raw_input())
	if n==0.00:
		break
	count,i,k=0,2,0
	while(count<n):
		count+=(1*1.0/i)
		i+=1
		k+=1
	print "%d card(s)" % k

def fun(n):
	i = len(n)/2
	while(True): 
		if n[::]==n[::-1]:
			if len(n)%2==1:
				return n[:i]+str(int(n[i])+1)+n[i+1:]
			else:
				return n[:i-1]+str(int(n[i-1])+1)+str(int(n[i])+1)+n[i+1:]	
		if n[i-1]>n[len(n)-i]:
			return n[:len(n)/2]+n[:len(n)/2][::-1]
		elif n[i-1]<n[len(n)-i]:
			n = n[:i-1]+str(int(n[i-1])+1)+n[i:]
			return n[:len(n)/2]+n[:len(n)/2][::-1]
		else:
			if i<=1:
				return n
			i-=1

test = int(raw_input())
for i in xrange(test):
	n = str(raw_input())
	print fun(n)
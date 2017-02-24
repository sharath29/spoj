t = int(raw_input())
for k in xrange(t):
	case = map(int,raw_input().split())
	a=[]
	l=case[0]%10
	while True:
		a.append(l)
		l=(l*case[0])%10
		if l == case[0]%10:
			break
	if case[1]==0:
		print 1
	elif len(a)==1:
		print a[0]
	else:	
		temp = case[1]%len(a)
		print a[temp-1]

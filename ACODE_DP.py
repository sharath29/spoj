a=[0 for i in xrange(5000)]
a[0]=1
while(True):
	n=raw_input()
	if n=='0':
		break
	for i in xrange(len(n)):
		if n[i]<10 and n[i]>0:
			a[i+1]=a[i]
		if i>0:
			if int(n[i-1])*10+int(n[i])<27:
				a[i]+=a[i-2]
	for i in xrange(len(n)):
		print a[i]

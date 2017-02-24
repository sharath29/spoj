while(True):
	count = 0
	n=int(raw_input())
	if n==0:
		break
	a=map(int,raw_input().split())
	for i in xrange(n):
		if a[i]==0:
			continue
		if a[i]<0:
			j=i+1
			while a[i]!=0:
				if a[j]>0:
					temp = abs(a[i])-abs(a[j])
					if abs(a[i])<=abs(a[j]):
						count+=(j-i)*abs(a[i])

					else:
						count+=(j-i)*abs(a[j])
					if temp>=0:
						a[i]=temp
						a[j]=0
					else:
						a[i]=0
						a[j]=temp
				j+=1
		else:
			j=i+1
			while a[i]!=0:
				if a[j]<0:
					temp = abs(a[i])-abs(a[j])
					if abs(a[i])<=abs(a[j]):
						count+=(j-i)*abs(a[i])
					else:
						count+=(j-i)*abs(a[j])
					if temp>=0:
						a[i]=temp
						a[j]=0
					else:
						a[i]=0
						a[j]=temp
				j+=1
	print count
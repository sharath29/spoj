
n = map(int,raw_input().split())
while(not(n[0]==0 and n[1]==0 and n[2]==0)):
	if n[1]-n[0] == n[2]-n[1]:
		print 'AP '+str(n[2]+(n[1]-n[0]))
	elif n[1]*1.0/n[0] == n[2]*1.0/n[1]:
		print 'GP '+str(int(n[2]*(n[1]*1.0/n[0])))
	n = map(int,raw_input().split())	


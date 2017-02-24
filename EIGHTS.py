# def cube_last_three(n):
# 	return str(n**3)[-3::]
# l=0
# for i in xrange(1,10000):
# 	if cube_last_three(int(str(i)+'2'))=='888':
# 		print l,i
# 		l+=1 


def func(n):
	n=n-1
	if n%4==0:
		return int(str((n)/4)+'192')
	if n%4==1:
		return int(str((n)/4)+'442')
	if n%4==2:
		return int(str((n)/4)+'692')
	if n%4==3:
		return int(str((n)/4)+'942')

T = int(raw_input())
for i in xrange(T):
	n = int(raw_input())
	print func(n)
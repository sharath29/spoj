count = 0
def acode(string):
	global count
	if len(string)==1 or len(string)==0:
		count += 1
		return
	acode(string[1:])
	if int(string[:2])<27:
		acode(string[2:]) 

while(True):
	string = raw_input()
	if string=='0':
		break
	count = 0
	acode(string)
	print count
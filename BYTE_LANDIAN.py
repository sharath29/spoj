value = {}
value[0] = 0
value[1] = 1

def calc(n):

    if n in value:
        return value[n]
    else:
        value[n] = max(n,calc(n/2)+calc(n/3)+calc(n/4))
        return value[n]
 


n = int(raw_input())
print calc(n)

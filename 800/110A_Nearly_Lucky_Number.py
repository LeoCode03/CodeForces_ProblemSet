n = input()
digitos = 0

for i in n:
    if i=='4' or i=='7':
        digitos+=1
        
if digitos==4 or digitos==7:
    print("YES")
else:
    print("NO")

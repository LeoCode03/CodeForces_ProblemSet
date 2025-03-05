cad = input()
minus = 0
mayus = 0

for c in cad:
    if c.islower():
        minus += 1
    elif c.isupper():
        mayus += 1

if mayus>minus:
    cad = cad.upper()
else:
    cad = cad.lower()
    
print(cad)    
n = int(input())
op = map(int, input().split())
resul = 0
for i in op:
    if i == 1:
        resul += 1

if resul>0:
    print("HARD")
else:
    print("EASY")
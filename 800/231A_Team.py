n = int(input())
contador = 0

for _ in range(n):
    p,v,t = map(int, input().split())
    if (p+v+t)>=2:
        contador += 1

print(contador)

n, k = map(int, input().split())
a = list(map(int, input().split()))

valor = a[k - 1]
contador = 0

for i in range(n):
    if a[i] >= valor and a[i] != 0:
        contador += 1

print(contador)

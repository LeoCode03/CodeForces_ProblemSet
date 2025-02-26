n = int(input())
cad = input()
contador = 0

for i in range(n-1):
    if cad[i]==cad[i+1]:
        contador += 1

print(contador)
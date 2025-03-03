posX = int(input())
cont = 0
for n in range(5, 0, -1):
    cont += posX//n
    posX %= n

print(cont)

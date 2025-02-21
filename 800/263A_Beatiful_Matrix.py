posF, posC, resul = 0, 0, 0
matriz = [[0] * 5 for _ in range(5)]

for i in range(5):
    matriz[i] = list(map(int, input().split()))
        
for i in range(5):
    for j in range(5):
        if matriz[i][j]==1:
            posF = i+1
            posC = j+1

resul = int(abs(posF-3)+abs(posC-3))

print(resul)
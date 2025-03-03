k, n, w = map(int, input().split())
resul = 0
for i in range(1, w+1):
    resul += k*i
    
resul -= n

if resul<0:
    print(0)
else:
    print(resul)
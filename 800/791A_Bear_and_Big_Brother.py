a, b = map(int, input().split())
resul = 0
while a<=b:
    a *= 3
    b *= 2
    resul += 1
    
print(resul)
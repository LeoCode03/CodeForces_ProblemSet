n, h = map(int, input().split())
amigos = list(map(int, input().split()))
resul = 0
for amigo in amigos:
    if amigo > h:
        resul += 2
    else:
        resul += 1
print(resul)
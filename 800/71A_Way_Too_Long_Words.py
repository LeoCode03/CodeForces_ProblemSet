n = int(input())

for _ in range(n):
    w = input()
    if len(w)>10:
        resul = w[0] + str(len(w)-2) + w[-1]
    else:
        resul = w
    print(resul)
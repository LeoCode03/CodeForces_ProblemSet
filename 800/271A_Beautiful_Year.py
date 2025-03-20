year = input()
resul = int(year)
digits = set()
while True:
    resul += 1
    year = str(resul)
    digits = set(str(resul))
    if len(digits)==4:
        break
print(resul)

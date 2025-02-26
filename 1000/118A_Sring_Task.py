cad = list(input())
resul = ""

for c in cad:
    c = c.lower()
    if c != 'a' and c != 'o' and c != 'y' and c != 'e' and c != 'u' and c != 'i':
        resul += '.'
        resul += c

print(resul)

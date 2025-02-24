nombre = input()
resul = " "

if len(set(nombre))%2 == 0:
    resul = "CHAT WITH HER!"
else:
    resul = "IGNORE HIM!"

print(resul)
cadA = input()
cadB = input() 

if cadA.lower() < cadB.lower():
    resul = -1
elif cadA.lower() > cadB.lower():
    resul = 1
else:
    resul = 0 

print(resul)

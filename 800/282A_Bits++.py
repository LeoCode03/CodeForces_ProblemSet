n = int(input())
contador = 0

for _ in range(n):
    operador = input().strip()   
    if (operador == "++X") or (operador == "X++"):
        contador += 1

    if (operador == "--X") or (operador == "X--"):
        contador -= 1

print(contador)

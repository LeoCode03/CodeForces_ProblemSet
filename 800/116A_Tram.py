estaciones = int(input())
pasajeros = []
total = 0
for i in range(estaciones):
    suben, bajan = map(int, input().split())
    total = total - suben + bajan
    pasajeros.append(total)

maximo = max(pasajeros)
print(maximo)
sumas = list(map(int, input().split('+')))
sumasOrd = sorted(sumas)
cadSum = "+".join(map(str,sumasOrd))
print(cadSum)

n = int(input())
win = input()

anton = win.count('A')
danik = win.count('D')

if anton == danik: 
    print("Friendship")
elif anton>danik:
    print("Anton")
else:
    print("Danik") 
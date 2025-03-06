n = int(input())
rx,ry,rz=0,0,0
for _ in range(n):
    x,y,z = map(int, input().split())
    rx+=x
    ry+=y
    rz+=z

if rx==0 and ry==0 and rz==0:
    print("YES")
else:
    print("NO") 
import math
x = int(input())
for i in range(x):
    c,r = map(int, input().split())
    c = math.ceil(c/9)
    r = math.ceil(r/9)
    if  r <= c:
        print(1, r)
    else:
        print(0, c)    
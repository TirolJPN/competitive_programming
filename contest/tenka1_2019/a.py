a, b, c = map(int,open(0).read().split())
if (max(a,b) > c and c > min(a, b)):
    print("Yes")
else:
    print("No")
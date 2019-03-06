a, b, k = (int(i) for i in input().split())

list = []
for i in range(max(a, b), 0, -1):
        if(a % i == 0 and b % i == 0):
                list.append(i)
print(list[k-1])

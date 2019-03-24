n = int(input())
l = list(int(i) for i in input().split())

l_max = max(l)
index_max = l.index(l_max)

sum = sum(l) - l_max

if (sum > l_max):
    print('Yes')
else:
    print('No')
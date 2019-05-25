N, M = (int(i) for i in input().split())

LR = [list(map(int, input().split())) for _ in range(M)]
L = [i[0] for i in LR]
R = [i[1] for i in LR]

# print(L)
# print(R)
result =  min(R) - max(L) + 1
if (result < 0):
    result = 0
print(result)
N, M, C = (int(i) for i in input().split())
B = list(map(int, input().split()))
A = [list(map(int, input().split())) for _ in range(N)]
result = 0
for i in range(N):
        if (sum([x * y for (x, y) in zip(A[i], B)]) + C) > 0:
                result += 1
print(result)
import math

N = int(input())
A = []
XY = []
for n in range(N):
        a = int(input())
        A.append(a)
        XY.append([list(map(int, input().split())) for _ in range(a)])
# print(A)
# print(XY)

for n in reversed(range(1, N + 1)):
        WP = [True] * N
        
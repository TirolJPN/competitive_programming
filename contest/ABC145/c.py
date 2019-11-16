import math

N = int(input())

XY = [list(map(int, input().split())) for _ in range(N)]
X = [i[0] for i in XY]
Y = [i[1] for i in XY]

WS = [[0 for i in range(N)] for j in range(N)]

for i in range(N):
    for j in range(N):
        WS[i][j] = math.sqrt((X[i] - X[j])**2 + (Y[i] - Y[j])**2)

result = 0.0

for s in range(0, N-1):
    for d in range(s+1,N):
        result += WS[s][d]

print(2*result/(N))
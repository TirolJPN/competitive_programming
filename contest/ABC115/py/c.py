N, K = (int(i) for i in input().split())
H = []
for index in range(0, N):
    H.append(int(input()))
H.sort()
print(min(H[i + K-1] - H[i] for i in range(0, N-K+1)))
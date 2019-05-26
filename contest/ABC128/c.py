N, M = (int(i) for i in input().split())

KS = [list(map(int, input().split())) for _ in range(M)]
K = [i[0] for i in KS]
S = [i[1:] for i in KS]

P = list(map(int, input().split()))
print(S)
result = 0
for i in range(N):
    print('i:',i)
    for j in range(i+1):
        print('j:',j)
        t_flag = True
        for k in range(M):
            if ((i-j)%2 == P[k] and (j >= S[k][0] or i <= S[k][-1]) ):
                continue
            else:
                t_flag = False
                break
        if t_flag:
            result += 1
print(result)
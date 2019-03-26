N, Q = (int(i) for i in input().split())
S = input()
LR = [list(map(int, input().split())) for _ in range(Q)]

accum = [0] * N

def countAC():
    count = 0
    for i in range(1, N):
        if(S[i-1] == "A" and S[i] == "C"):
            count += 1
        accum[i] = count



countAC()

for i in range(Q):
    print(accum[LR[i][1]-1] - accum[LR[i][0]-1])

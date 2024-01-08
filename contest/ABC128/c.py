N, M = (int(i) for i in input().split())

SC = [list(map(int, input().split())) for _ in range(M)]

result = [0, 0, 0]
cflag = True
for sc in SC:
    s = sc[0]
    c = sc[1]
    elm = c * 10**(3-s)
    if result[s-1]==0:
        result[s-1] = c
    elif result[s-1] != c:
        cflag = False
if (cflag and result[3-N] != 0):
    res = 0
    if all([i == 0 for i in result]):
        print(-1)
    else:
        for index, e in enumerate(result):
            res += e * 10**(2-index)
        print(res)
else:
    print(-1)
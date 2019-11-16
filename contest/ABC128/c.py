N, M = (int(i) for i in input().split())

KS = [list(map(int, input().split())) for _ in range(M)]
K = [i[0] for i in KS]
S = [i[1:] for i in KS]

P = list(map(int, input().split()))
# print(S)
# print(P)
result = 0
for i in range(2 ** N):
    # print(bin(i).count("1"))
    t_flag = True
    print('i:%d' % i)
    for k in range(M):
        if (bin(i).count("1") % 2 == P[k]):
            continue
        else:
            print(bin(i).count("1"), P[k])
            t_flag = False
            break
    if t_flag:
        result += 1
print(result)
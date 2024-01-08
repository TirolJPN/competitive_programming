A1 = list(map(int, input().split()))
A2 = list(map(int, input().split()))
A3 = list(map(int, input().split()))
A = list()
A.extend(A1)
A.extend(A2)
A.extend(A3)
N = int(input())
B = list()
result = list()
for _ in range(N):
    B.append(int(input()))
for e in B:
    if e in A:
        result.append(A.index(e))
loopflag = False
result.sort()
# print(result)
if N >= 3:
    for i in range(len(result)):
        for j in range(len(result)):
            for k in range(len(result)):
                if (i!=j and j!=k and k!=i):
                    if((result[i] % 3 == result[j] % 3 == result[k] % 3 ) or (result[i] // 3 == result[j] // 3 == result[k] // 3) or (result[i] == 0 and result[j] == 4 and result[k] ==8 ) or (result[i] == 2 and result[j]  == 4 and result[k] == 6 )):
                        loopflag = True
    if loopflag:
        print('Yes')
    else:
        print('No')
else:
    print('No')
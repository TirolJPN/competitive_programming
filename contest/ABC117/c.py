import itertools

N, M= (int(i) for i in input().split())
X = list(int(i) for i in input().split())
X.sort()

if(N >= M):
    print(0)
else:
    combination = list(itertools.combinations(range(M),N-1))
    min = 2 * 100000
    for tmp_taple in combination:
        tmp_sum = 0
        from_index = 0
        for to_index in tmp_taple:
            tmp_sum += X[to_index] - X[from_index]
            from_index = to_index + 1
        if(from_index < M-1):
            tmp_sum += X[M-1] - X[from_index]
        if(min > tmp_sum):
            min = tmp_sum
    print(min)

N, M = list(int(i) for i in input().split())


K = {}
for i in range(0, N):
    tmp_list =  list(int(i) for i in input().split())
    K[i] = tmp_list


# result = K[0][0]
foods_set = set(K[0][1:])
for i in range(1, N):
    foods_set = set(foods_set) & set(K[i][1:])
    result = len(foods_set)
    if(result == 0): 
        break

print(len(foods_set))
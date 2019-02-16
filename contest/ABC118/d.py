
require_match_list= {1:2, 2:5, 3:5, 4:4, 5:5, 6:6, 7:4, 8:7, 9:6}

N, M = list(int(i) for i in input().split())

A = {}
NUM = []
for i in input().split():
    A[int(i)] = require_match_list[int(i)]

sorted(A.items(), key=lambda x: x[1])

A_count = [0] * 10

print(A)
for key, item in A:
    if N % item != 0:
        
    
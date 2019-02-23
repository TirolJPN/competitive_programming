"""
自分の解答
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
"""


# intのn, mに入力のNとMを，aに配列として，使用できる数であるA_1 ~ A_jを入力する
n,m,*a=map(int,open(0).read().split())

# d[0]: dpi(0)=0を表す
# 使用できるマッチの本数N * 9の-1を用意する(9は，全マッチ棒を使１用した場合の領域も確保している)
"""
d: [マッチ棒が0の時は0,
    
"""
d=[0]+[-1]*n*9

# 1 ~ (使用できるマッチ棒の本数)までの最大桁数(解説のdpi(N-1)に相当)を全探索で求める
for i in range(1,n+1):
    # d[1] ~ d[n]を全探索で求める
    # d[i]は次のaの各要素jの最大値
    #   max{j + d[i - (jの数を作るのに必要なマッチの本数)] * 10 } (つまり，jは一番下の桁に使う)
    d[i]=max(j + d[i-int('0255456376'[j])]*10 for j in a)
print(d[n])
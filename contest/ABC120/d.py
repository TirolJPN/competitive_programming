# http://at274.hatenablog.com/entry/2018/02/02/173000#%E5%AE%8C%E6%88%90%E5%BD%A2 より引用


class UnionFind:
    def __init__(self, n):
        # 0indexは使用しない. 親要素のノード番号を格納．par[x]==xの時，xは根
        self.par = [i for i in range(n+1)]
        # 木の高さを表す
        self.rank = [0] * (n+1)
        # それぞれの要素数を持つ
        self.size = [0] + [1] * n

    # 検索
    def find(self, x):
        if self.par[x] == x:
            return x
        else:
            self.par[x] = self.find(self.par[x])
            return self.par[x]

    # 併合
    def union(self, x, y):
        x = self.find(x)
        y = self.find(y)
        if self.rank[x] < self.rank[y]:
            self.par[x] = y
        else:
            self.par[y] = x
            if self.rank[x] == self.rank[y]:
                self.rank[x] += 1

    # 同じ集合に属するか判定
    def same_check(self, x, y):
        return self.find(x) == self.find(y)

    # 同じ根を持つ要素数を返す
    def get_size(self, x):
        return self.size[x]


N,M,*t=map(int,open(0).read().split())
# 壊していく橋の始点
A = [0] + t[0::2]

# 壊していく橋の終点
B = [0] + t[1::2]

# 出力用の解答を格納する変数
out_ans = [0] * (M + 1)

# 1 ~ Mについて到達不可能な2点の組み合わせの数(不便さ)を計算する
# 解答より，M, M-1,...,1の順で計算する

UF = UnionFind(N)

# i番目に出力すべき不便さを求める
# def ans(i, UF):
#     global N,A,B,out_ans
#     if UF.same_check(A[i+1], B[i+1]):
#         return out_ans[i+1]
#     else:
#         n1 = UF.get_size(A[i+1])
#         n2 = UF.get_size(B[i+1])
#         UF.union(A[i+1], B[i+1])
#         return out_ans[i+1] - (n1 * n2)


# 全ての辺を削除した時の答えを格納
sm=N*(N-1)//2

out_ans[M] = sm

group=[1]*(N+1)

for i in range(M, 0, -1):
    # out_ans[i] = (ans(i, UF))
    if not UF.same_check(A[i], B[i]):
        grpa = UF.find(A[i])
        grpb = UF.find(B[i])
        UF.union(A[i], B[i])
        sm -= group[grpa] * group[grpb]
        group[grpa] = group[grpb] = group[grpa] + group[grpb]
    out_ans[i-1] = sm

[print(tmp) for tmp in out_ans[1:]]
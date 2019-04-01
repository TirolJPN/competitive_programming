N, M= (int(i) for i in input().split())
if (N<M):
    X = list(int(i) for i in input().split())
    X.sort()
    Y = [X[i] - X[i-1] for i in range(1, len(X))]
    Y.sort()
    print(sum(Y[0:M-N]))
else:
    print(0)


"""
N個のコマ：N-1個の閉経路が存在する
各座標の距離を求める(M-1個)
M：座標の数　N:駒の数
移動しなくても通っている座標の数: N
M - N
"""
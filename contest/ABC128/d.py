import math

# 有理数型をインポート

# 組合せの総数`
def cmb(n, r):
    if n - r < r: r = n - r
    if r == 0: return 1
    if r == 1: return n
 
    numerator = [n - r + k + 1 for k in range(r)]
    denominator = [k + 1 for k in range(r)]
 
    for p in range(2,r+1):
        pivot = denominator[p - 1]
        if pivot > 1:
            offset = (n - r) % p
            for k in range(p-1,r,p):
                numerator[k - offset] /= pivot
                denominator[k] /= pivot
 
    result = 1
    for k in range(r):
        if numerator[k] > 1:
            result *= int(numerator[k])
 
    return result


X, Y = (int(i) for i in input().split())

i = (2*X-Y)//3
j = (2*Y-X)//3

if(  i < 0 or j < 0 or (2*X-Y)%3!=0 or (2*Y-X)%3!=0 ):
    print(0)
else:
    print(cmb(i+j, i) % 1000000007)

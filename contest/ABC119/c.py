N, A, B, C = map(int, input().split())
l = [int(input()) for i in range(N)]
INF = 10 ** 9

def cost(index, a,b,c):
    if index == N:
        return (abs(a-A) + abs(b-B) + abs(c-C) - 30) if min(a,b,c) > 0 else INF
    ret0 = cost(index+1, a,b,c)
    ret1 = cost(index+1, a+l[index],b,c) + 10
    ret2 = cost(index+1, a,b+l[index],c) + 10
    ret3 = cost(index+1, a,b,c+l[index]) + 10
    return min(ret0, ret1, ret2, ret3) + 10

print(cost(0,0,0,0))
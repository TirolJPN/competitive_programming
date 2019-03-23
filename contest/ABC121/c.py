N, M, = (int(i) for i in input().split())
AB = [list(map(int, input().split())) for _ in range(N)]
AB.sort(key=lambda x:x[0])

money = 0
items = 0
for i in range(N):
    if (items + AB[i][1] < M):
        money += AB[i][0] * AB[i][1]
        items += AB[i][1]
    else:
        j = (M - items)
        money += AB[i][0] * j
        items +=j
        # for j in range(1,AB[i][1]+1):
        #     if (items+j == M):
        #         money += AB[i][0] * j
        #         items +=j

print(money)
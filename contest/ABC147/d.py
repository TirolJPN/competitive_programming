n, m = (int(i) for i in input().split())
a = list(map(int, input().split()))
bc = [list(map(int, input().split())) for _ in range(m)]
a.sort()
bc.sort(key=lambda x:x[1], reverse=True)

# print(a)
# print(bc)

index = 0
break_flag = False

for i in range(m):
    for j in range(bc[i][0]):
        if (index < n):
            if(a[index] < bc[i][1]):
                a[index] = bc[i][1]
                index += 1
                # print(a)
            else:
                break_flag = True
                break
        else:
            break_flag = True
            break
    if  break_flag:
        break
print(sum(a))
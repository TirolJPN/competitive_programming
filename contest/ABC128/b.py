n = int(input())

sp = [list(input().split()) for i in range(n)]
for index, sp_t in enumerate(sp):
        sp_t.append(index)
sp.sort(key=lambda x:int(x[1]), reverse=True)
# print(sp)
sp.sort(key=lambda x:x[0])
# print(sp)

for sp_t in sp:
        print(sp_t[2]+1)
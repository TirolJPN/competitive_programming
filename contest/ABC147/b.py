s = input()
 
c = 0
N = len(s)
for i in range(N // 2):
    if s[i] != s[N - i]:
        c += 1
print(c)
n = int(input())
s = list(input())

count1 = s.count('.')
count2 = s.count('#')

count3 = 2 * 10 ** 5 + 1
for i in range(1,n):
    count3 = min(count3, s[:i-1].count("#")+s[i:].count("."))
print(min(count1, count2, count3))

import math
menu = []
for i in range(0, 5):
        menu.append(int(input()))
df = max([10 - i % 10 for i in menu if i % 10 != 0 ],default=0)
sum = 0
for i in menu:
        sum += ((i + 9) // 10) * 10
if(df == 0):
        print(sum)
else:
        print(sum-df)
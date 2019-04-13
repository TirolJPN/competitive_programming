import math
n = int(input())
menu = []
for i in range(0, 5):
    menu.append(int(input()))
min_in = min(menu)

print(5+math.ceil((n-min_in)/min_in))
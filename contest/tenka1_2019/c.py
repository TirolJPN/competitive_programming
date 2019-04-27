import fractions 
from functools import reduce
import copy

def gcd_list(numbers):
    return reduce(fractions.gcd, numbers)

n = int(input())
a =  list(map(int, input().split()))

a.sort()
tmp_a = copy.deepcopy(a)
tmp_a.pop(0)
result = gcd_list(tmp_a)

for i in range(1, n):
    tmp_a = copy.deepcopy(a)
    tmp_a.pop(i)
    tmp = gcd_list(tmp_a)
    if(result < tmp):
        result = tmp
        break

print(result)
import collections
N = int(input())
V = list(int(i) for i in input().split())
even = V[0::2]
odd =  V[1::2]
even_count = collections.Counter(even).most_common(1)
print(even_count[0])
odd_count = collections.Counter(odd).most_common(1)
print(odd_count[0])
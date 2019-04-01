import collections

N = int(input())
V = list(int(i) for i in input().split())
even = V[0::2]
odd =  V[1::2]
all_length = len(V)
even = collections.Counter(even).most_common(2)
odd = collections.Counter(odd).most_common(2)
if (even[0][0] != odd[0][0]):
    print(all_length - even[0][1] - odd[0][1])
else:
    if(len(even) == 1 and len(odd) == 1):
        print(all_length // 2)
    elif(len(even)==1):
        print(all_length // 2 - odd[1][1])
    elif(len(odd)==1):
        print(all_length // 2 - even[1][1])    
    else:
        print(min(all_length - even[0][1] - odd[1][1], all_length - even[1][1] - odd[0][1]))

[s1, s2] = list(input())
[t1, t2] = list(input())

point_list = ['A', 'B', 'C', 'D', 'E']

def get_distance(p1, p2):
  index1 = point_list.index(p1)
  index2 = point_list.index(p2)
  diff = abs(index1 - index2)
  return min(diff, 5-diff)

distance1 = get_distance(s1, s2)
distance2 = get_distance(t1, t2)

result = 'Yes' if distance1 == distance2 else 'No'
print(result)

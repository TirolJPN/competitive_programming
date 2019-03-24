N = int(input())
H = list(int(i) for i in input().split())

# 再帰的にカウントしていく
def count(h):
    print(h)
    if len(h) != 0:
        output = 0
        min_elem = min(h)
        output += min_elem
        for index in range(0, len(h)):
            h[index] -= min_elem
        tmp_h = []
        for index in range(0, len(h)):
            if (h[index] > 0):
                tmp_h.append(h[index])
            else:
                output += count(tmp_h)
                tmp_h = []
        output += count(tmp_h)
        print(output)
        return output
    else:
        return 0

h = H
print(count(h))
tmp = input()

out_1 = 0
tmp_s = []
for c in tmp:
        if c == "A" or c == "G" or c == "T" or c == "C":
                tmp_s.append(c)
        else:
                if out_1 < len(tmp_s):
                        out_1 = len(tmp_s)
                tmp_s = []
if out_1 < len(tmp_s):
        out_1 = len(tmp_s)
print(out_1)
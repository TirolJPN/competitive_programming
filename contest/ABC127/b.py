r, d, x_2000= map(int,open(0).read().split())

x = [0] * 11
x[0] = x_2000

for i in range(1, len(x)):
        x[i] = r * x[i-1] - d
        print(x[i])
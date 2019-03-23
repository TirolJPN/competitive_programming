H, W, h, w = map(int,open(0).read().split())

print(H * W - (h * W + H * w) + h * w)
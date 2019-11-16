n = int(input())
s = input()

print(type(s))
if(n % 2 == 1):
    print("No")
else:

    print(s[:(n//2)])
    print(s[(n//2):])
    if (s[:(n//2-1)] == s[(n//2):]):
        print("Yes")
    else:
        print("No")

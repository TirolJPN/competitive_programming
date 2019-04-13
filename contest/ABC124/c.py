s = str(input())
sum=0
for i in range(len(s)):
    if(i%2==0 and int(s[i])==1):
        sum+=1
    if(i%2==1 and int(s[i])==0):
        sum+=1
if(sum > (len(s)-sum)):
    print(len(s)-sum)
else:
    print(sum)
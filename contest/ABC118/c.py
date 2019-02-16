N = int(input())
A = list(int(i) for i in input().split())

A.sort()


if((A[1] - A[0]) == 0):
    min_HP = A[0]
    print(min_HP)
else:
    min_HP = A[1] - A[0]
    while((A[1] - A[0]) > 0):
        A.insert(0, A[1] - A[0])
        A.sort()
        if((A[1] - A[0]) == 0):
            break
        min_HP = A[1] - A[0]

    # そのループでまだmin_HPが更新されていない
    while(True):
        min_flag = False
        for a in A:
            if ((a % min_HP) < min_HP and (a % min_HP) > 0):
                min_HP = a % min_HP
                min_flag = True
        if( min_HP > 0 and min_flag ):
            continue
        else:
            break
    print(min_HP)
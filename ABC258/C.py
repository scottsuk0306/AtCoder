n, k, q = map(int, input().split())
arr = map(int, input().split())
l = map(int, input().split())

sq = [-1 for i in range(n+1)]

for index in arr:
    sq[index] = 1

for q in l:
    idx = 1
    while(q):
        if sq[idx] != -1:
            q -= 1
        if q == 0:
            break
        idx += 1
    
    if idx == n:
        # print("Do nothing1")
        continue
    if sq[idx+1] != -1:
        # print("Do nothing2")
        continue
    else:
        sq[idx+1] = sq[idx]
        sq[idx] = -1
        # print("Do smthg")

# print(sq)

for i in range(1, len(sq)):
    if sq[i] != -1:
        print(i, end=" ")
        
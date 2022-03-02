# Code by tatyam
# TODO: get used to itertools
from itertools import *
N, X = map(int, input().split())
A = []
for i in range(N):
  L, *a = map(int, input().split())
  A.append(a)
ans = 0
for i in product(*A):
  mul = 1
  for x in i:
    mul *= x
  if mul == X:
    ans += 1
print(ans)
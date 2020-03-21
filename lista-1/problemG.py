# Question
# https://codeforces.com/problemset/problem/157/B

import math

qtd = int(raw_input())
raios = map(int, raw_input().split())
raios.sort()

sign = 1
i = 0
area = 0
while(i < qtd):
  area = area + (sign * (raios[i]*raios[i]*math.pi))
  sign*=-1
  i+=1
  
print abs(area)

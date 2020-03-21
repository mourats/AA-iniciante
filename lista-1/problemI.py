# Question
# https://codeforces.com/problemset/problem/740/A

def minimo(a, b):
  if(a > b):
    return b
  else:
    return a

def minimo3(a, b, c):
  return minimo(minimo(a, b), c)


prices = map(int, raw_input().split())
num = prices.pop(0)
mod = num % 4
minimum_amount = 0

if(mod == 1):
  minimum_amount = minimo3(prices[0]*3, prices[0] + prices[1], prices[2])
elif(mod == 2):
  minimum_amount = minimo3(prices[0]*2, prices[1], prices[2]*2)
elif(mod == 3):
  minimum_amount = minimo3(prices[0], prices[1] + prices[2], prices[2]*3)

print minimum_amount

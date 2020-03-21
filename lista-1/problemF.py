# Question
# https://codeforces.com/problemset/problem/766/B

qtd = int(raw_input())
lines = map(int, raw_input().split())
lines.sort(reverse = True)
result = 'NO'

i = 0
flag = True
while((i + 2) < qtd and flag):
  if((lines[i + 2] + lines[i + 1]) > lines[i]):
    result = 'YES'
    flag = False
  i+=1

print result

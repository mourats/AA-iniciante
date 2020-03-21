# Question
# https://codeforces.com/problemset/problem/109/A

number = int(raw_input())
sete = 7
quatro = 4
max_input = 1000000
max_sete = max_input/sete
max_quatro = max_input/quatro
result = ''

i=0
y=0
flag = True
while(i < max_quatro and flag):
  if(i*quatro <= number):
    while(y < max_sete and flag):
      y = (number - (i*quatro)) / sete
      current = (i*quatro) + (y*sete)
      if(current == number):
        result = ('4' * i) + ('7' * y)
        flag = False
      else:
        y = max_sete
    y=0
    i+=1
  else:
    i = max_quatro
  
if(result == ''):
  print '-1'
else:
  print result

#include<stdio.h>
#include<stdlib.h>

// Question
// https://codeforces.com/problemset/problem/681/B
typedef int bool;
#define true 1
#define false 0

int main(void) {

  char* result = "NO";
  int money, max_money = 1000000000,  a = 1234567, b = 123456, c = 1234;
  int max_a = (max_money/a)+1, max_b = (max_money/b)+1, max_c = (max_money/c)+1;
  int x = 0, y = 0, z = 0;
  bool flag = true;
  long long quant = 0;

  scanf("%d", &money);
  while(x < max_a && flag){
    if((x*a) <= money){
      while(y < max_b && flag){
        if(((x*a) + (y*b)) <= money){
          while(z < max_c && flag){
            z = abs((money - ((x*a) + (y*b))) / c);
            quant = (x*a) + (y*b) + (z*c);
            if(quant == money){
              result="YES";
              flag = false;
            } else z = max_c;
          }
          z=0;
          y++;
        } else y = max_b;
      }
      y=0;
      x++;
    } else x = max_a;
  }
  
  printf("%s", result);
  return 0;
}

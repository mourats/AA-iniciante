// Problem
//https://codeforces.com/contest/82/problem/A

#include <stdio.h>

int main(void) {

  long long num;
  scanf("%lld", &num);
  
  char* names[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
  
  int i = 1, y = 0, ratio = 1, actual_ratio = 0;
  char* name = names[y];

  while(i < num) {
    if(actual_ratio == 0){
      y++;
      if(y >= 5){
        y = 0;
        ratio = ratio * 2;
        actual_ratio = ratio;
      }
      name = names[y];
      actual_ratio = ratio;
    }
    actual_ratio--;
    i++;
  }
  printf("%s", name);
  return 0;
}

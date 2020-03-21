#include<stdio.h>
#include<stdlib.h>

// Question
// https://codeforces.com/problemset/problem/1165/B
typedef int bool;
#define true 1
#define false 0

int compare( const void* a, const void* b) {
     long long int_a = * ( (long long*) a );
     long long int_b = * ( (long long*) b );

     if ( int_a == int_b ) return 0;
     else if ( int_a < int_b ) return -1;
     else return 1;
}

int main(void) {

  long long num;
  scanf("%lld", &num);
  long long array[num], i = 0;
  while (i < num && scanf("%lld", &array[i++]) == 1);
  
  qsort( array, num, sizeof(long long), compare );

  long long contestIdx = -1, x = 0, lastIdx = 0;
  bool flag = true;
  while(x < num  && flag){
    contestIdx = -1;
    for (long long c = lastIdx; c < num; c++){
      if(array[c] >= (x + 1)){
        contestIdx = c;
        lastIdx = c;
        break;
      }
    }
    if(contestIdx != -1){
      array[contestIdx] = 0;
      x++;
    } else {
      flag = false;
    }
  }
  printf("%lld", x);
  return 0;
}

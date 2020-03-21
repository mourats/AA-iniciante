#include<stdio.h>
#include<stdlib.h>

// Question
// https://codeforces.com/problemset/problem/1132/B
int compareReverse( const void* a, const void* b) {
     long long int_a = * ( (long long*) a );
     long long int_b = * ( (long long*) b );

     if ( int_a == int_b ) return 0;
     else if ( int_a > int_b ) return -1;
     else return 1;
}

int main(void) {

  long long num;
  scanf("%lld", &num);
  long long array[num], i = 0;
  while (i < num && scanf("%lld", &array[i++]) == 1);

  long long qtd_coupons;
  scanf("%lld", &qtd_coupons);
  long long coupons[qtd_coupons];
  i = 0;
  while (i < qtd_coupons && scanf("%lld", &coupons[i++]) == 1);
  
  qsort( array, num, sizeof(long long), compareReverse );

  long long sum = 0, result = 0;
    for (long long i = 0; i < num; i++){
    sum += array[i];
  }

  for (long long c = 0; c < qtd_coupons; c++){
    i = coupons[c] - 1;
    result = sum - array[i];
    printf("%lld\n", result);
  }

  return 0;
}

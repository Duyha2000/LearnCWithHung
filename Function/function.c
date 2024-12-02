#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int findGCD(int a, int b) {
  int temp;
  int gcd;
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
  for (int i = 1; i <= a; i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i; // i = 12
    }
  }
  return gcd;
}

bool isPrime(int n) {
  if (n < 2)
    return false;
  for (int i = 2; i <= n - 1; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main(void) {
  // https://github.com/Duyha2000/Cplusplus/tree/main/Function
  // int a = 48: [1] 2 3 4 6 [12] 24
  // int b = 60: [1] 2 3 [4] [12] 30
  // UCLN: 12

  // int a = 5
  // int b = 10

  // int a = 10
  // int b = 5

  // a < b

  // UCLN: 5
  // -> 6,7,8,9,10
  int a, b, gcd;
  scanf("%d %d", &a, &b);
  int x = findGCD(a, b);
  printf("%d \n", x); // 12

  // x = 12 = 2 * 2 * [3]
  // 12 : [6 4] 2-> 11
  for (int i = 2; i <= x - 1; i++) {
    if (isPrime(i) && x % i == 0) {
      gcd = i; // i = 12
    }
  }
  printf("%d", gcd);
  // array, reference
  // string, pointer

  // Array, Hashmap,...
  // List, Dictionary
  return 0;
}
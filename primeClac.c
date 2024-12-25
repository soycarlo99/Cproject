#include <stdio.h>

int main(){
  int primes[100];
  int count = 0;
  
  for (int i = 2; i < 100; i++) {
      int isPrime = 1;

      for (int j = 2; j * j <= i; j++) { 
          if (i % j == 0) {
              isPrime = 0;
              break;
          }
      }

      if (isPrime) {
          primes[count++] = i;
      }
  }

  printf("These are the prime numbers\n");
  for(int i = 0; i < count; i++){
    printf("%d\n", primes[i]);
  }

  printf("\n");

  return 0;
}

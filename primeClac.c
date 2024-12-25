#include <stdio.h>

int main(){
  int primes[100];
  int count = 0;
  
  // Find prime numbers
  for (int i = 2; i < 100; i++) { // Start from 2 (smallest prime number)
      int isPrime = 1; // Flag to check if the number is prime

      for (int j = 2; j * j <= i; j++) { // Check divisors up to sqrt(i)
          if (i % j == 0) {
              isPrime = 0; // If divisible, it's not prime
              break;
          }
      }

      if (isPrime) {
          primes[count++] = i; // Store the prime number in the array
      }
  }

  printf("These are the prime numbers\n");
  for(int i = 0; i < count; i++){
    printf("%d\n", primes[i]);
  }

  printf("\n");

  return 0;
}

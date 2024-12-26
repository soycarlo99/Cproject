#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = ((a < b) ? a : b);
    while (result > 0) {
        // Check if both a and b are divisible by result
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

int absofN(int a){
  return abs(a);
}

float sqrofFloat(float num){
  int a = 0;
  while(a * a < num){
    a++;
  }

  return a;
  

}

int main(){




  int gcdResult = gcd(98, 56);
  printf("GCD of 98 and 56 is: %d\n", gcdResult);


  int absResult = absofN(-10);
  printf("Abs of -10 is: %d\n", absResult);


  float sqrResult = sqrofFloat(25);
  printf("sqr of 25 is: %fl\n", sqrResult);


  return 0;
}

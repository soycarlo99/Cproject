#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main(){
  system("clear");
  int myNumber = 10;
  int *PmyNumber = NULL;
  PmyNumber = &myNumber;

  //%p for memory adress
  printf("1- The adress of myNumber is: %p\n", &myNumber);
  printf("2- The adress of PmyNumber is: %p\n", &PmyNumber);
  printf("3- The value of the PmyNumber in the memory(pointer - same as first line) is: %p\n", PmyNumber);
  printf("4- The value of what PmyNumber is pointing to: %d\n", *PmyNumber);
  return 0;
}

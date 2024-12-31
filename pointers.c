#include <stdio.h>
#include <stdlib.h>

int main(void){

  system("clear");
  int number = 0;
  int *pnumber = NULL;

  number = 10; 
  printf("The numbers adress is: %p\n", &number);
  printf("The number's value is: %d\n\n", number);

  pnumber = &number;
  printf("pnumber's adress in the memory is: %p\n", (void*)&pnumber);
  printf("pnumber's size: %zd bytes\n", sizeof(pnumber));
  printf("pnumber's value: %p\n", pnumber);
  printf("Value pointed to: %d\n", *pnumber);

  return 0;
}

#include <stdio.h>

int main(){
  int inty;
  char chary;
  long longy;
  long long loongy;
  double doubly;
  long double longdoubly;

  printf("Size of int: %zd bytes\n", sizeof(inty));
  printf("Size of char: %zd byte\n", sizeof(chary));
  printf("Size of long: %zd bytes\n", sizeof(longy));
  printf("Size of long long: %zd bytes\n", sizeof(loongy));
  printf("Size of double: %zd bytes\n", sizeof(doubly));
  printf("Size of long double: %zd bytes\n", sizeof(longdoubly));

  return 0;
}

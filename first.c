/*
 *This is my first C project!
 *
 *
 */
 
#include <stdio.h>

enum brand {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

int main() {
 


  //enum brand {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
  enum brand myBrand1 = GOOGLE;
  enum brand myBrand2 = FACEBOOK;
  enum brand myBrand3 = XEROX;

  printf("Brand: GOOGLE, index = %d\n", myBrand1);

  printf("Brand: GOOGLE, index = %d\n", myBrand2);

  printf("Brand: GOOGLE, index = %d\n", myBrand3);
/*
  Enums test enum myColors = {ried, green, blue}
  

  enum gender {male, female};
  enum gender myGender;
*/



/*
  * int x, y, z;

  x = 5;
  printf("%d\n", x); //This prints the variable itself
  printf("%d\n", &x); //This prints the memory adress of the variable x
*/


/*
  char myName[100];
  int age = 0;

  printf("What is your name?\n");
  scanf("%99s", myName);
  printf("You Entered: %s\n", myName);
  

  printf("What is your age?\n");
  scanf("%d", &age); 
  printf("You entered this number: %d\n", age);


  printf("Your name is %s and you are %d years old\n", myName, age);
*/
  return 0;

  /* Just learning how to comment it seems like it is just like JS*/
  //We can use // too
}

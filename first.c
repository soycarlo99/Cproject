/*
 *This is my first C project!
 *
 *
 */
 
 #include <stdio.h>

int main() {
  char myfacoritenum[100];
  int age = 0;

  printf("What is your name?\n");
  scanf("%99s", myfacoritenum);
  printf("You Entered: %s\n", myfacoritenum);
  

  printf("What is your age?\n");
  scanf("%d", &age); 
  printf("You entered this number: %d\n", age);


  printf("Your name is %s and you are %d years old\n", myfacoritenum, age);

  return 0;

  /* Just learning how to comment it seems like it is just like JS*/
  //We can use // too
}

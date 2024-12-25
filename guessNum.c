#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  time_t t;
  srand((unsigned)time(&t));
  int randomNumber = rand() % 21;
  int guessed = 0;


  printf("This is a guessing game!\n");
  printf("You need to choose a number between 0-20\n");
  printf("\n\n");
  printf("Please enter a number between 0-20\n");
  scanf("%d", &guessed);
  
while(!(guessed==randomNumber)){
      if(guessed<randomNumber){
      printf("Please enter a HIGHER number\n");
      } else if(guessed>randomNumber){
      printf("please enter a LOWER number\n");
      }
      
      scanf("%d", &guessed);
    }
      if(guessed==randomNumber){
      printf("You guessed right!!!\n");
  }
}

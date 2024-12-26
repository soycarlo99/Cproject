#include <stdio.h>

void draw(void);
void mark(void);


char lots[10] = {'0',
  '1','2','3',
  '4','5','6',
  '7','8','9'
};

int main(){

  draw();
  return 0;
}


void draw(void){
  printf("\033[H\033[J");
  printf("\n\n");
  printf("\t\tTic Tac Toe!\n");
  printf("\tPlease enter a number in the grid\n\n\n");

  printf("   %c   |   %c   |   %c   \n", lots[1], lots[2], lots[3]);
  printf("-------|-------|-------\n");
  printf("   %c   |   %c   |   %c   \n", lots[4], lots[5], lots[6]);
  printf("-------|-------|-------\n");
  printf("   %c   |   %c   |   %c   \n", lots[7], lots[8], lots[9]);
  printf("\n\n");
  mark();
}


void mark(void){
  printf("Player 1 start the game. Please choose an square number between 1-9\n");
  int chosen;
  scanf("%d", &chosen);
  
  if(lots[chosen] == 'X' || lots[chosen] == 'O'){
    printf("It is not a vaild choice, please try again with another number\n");
  }
  lots[chosen] = 'X';
  draw();
}

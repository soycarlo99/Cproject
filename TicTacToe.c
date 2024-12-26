#include <stdio.h>

void draw(void);
void mark(void);
void check(void);
_Bool turns = 0;


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

  check();
  mark();
}


void mark(void){
  if(turns == 0){
  printf("Player 1 start the game. Please choose an available square number between 1-9\n");
  int chosen;
  scanf("%d", &chosen);
  
  if(lots[chosen] == 'X' || lots[chosen] == 'O'){
    printf("It is not a vaild choice, please try again with another number\n");
    int chosen;
    scanf("%d", &chosen);
  }
  lots[chosen] = 'X';
  turns = 1;
  draw();
  }

  if(turns == 1){
  printf("Player 2 start the game. Please choose an available square number between 1-9\n");
  int chosen;
  scanf("%d", &chosen);
  
  if(lots[chosen] == 'X' || lots[chosen] == 'O'){
    printf("It is not a vaild choice, please try again with another number\n");
    int chosen;
    scanf("%d", &chosen);
    check();
  }
  lots[chosen] = 'O';
  turns = 0;
  draw();
  }
}


void check(void) {
    // Row wins
    if ((lots[1] == lots[2] && lots[2] == lots[3]) ||
        (lots[4] == lots[5] && lots[5] == lots[6]) ||
        (lots[7] == lots[8] && lots[8] == lots[9])) {
        printf("Player %c wins by row!\n", lots[1]);
        return;
    }

    // Column wins
    if ((lots[1] == lots[4] && lots[4] == lots[7]) ||
        (lots[2] == lots[5] && lots[5] == lots[8]) ||
        (lots[3] == lots[6] && lots[6] == lots[9])) {
        printf("Player %c wins by column!\n", lots[1]);
        return;
    }

    // Diagonal wins
    if ((lots[1] == lots[5] && lots[5] == lots[9]) ||
        (lots[3] == lots[5] && lots[5] == lots[7])) {
        printf("Player %c wins by diagonal!\n", lots[1]);
        return;
    }

    // No winner yet
    for (int i = 1; i <= 9; i++) {
        if (lots[i] != 'X' && lots[i] != 'O') {
            return; // Continue game if any square is still empty
        }
    }

    // If all squares are filled and no winner
    printf("It's a draw!\n");
}

#include <stdio.h>


int main(){
float yearlyRain[5][12] = {
  {3,2,5,1,5,1,2,5,5,1,1,5},
  {3,2,5,1,5,2,2,5,5,1,1,5},
  {3,1,3,6,2,1,2,5,5,1,1,5},
  {3,2,5,1,5,1,2,5,5,1,1,5},
  {3,2,5,1,5,1,2,5,5,1,1,5}
  };

  for(int i = 0; i < 5; i++){

    int year = 2015;
    printf("\n");
    printf("Year %d: ", year+i);
      for(int j = 0; j < 12; j++){
      printf("%.2f, ", yearlyRain[i][j]);
    }
  }
  return 0;
}

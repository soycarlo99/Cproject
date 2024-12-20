#include <stdio.h>

int main(){
  double width;
  double height;
  double perimeter;
  double area;

  
  printf("Please type the width:\n");
  scanf("%lf", &width);
  printf("Please type the height:\n");
  scanf("%lf", &height);


  perimeter = 2*(width + height);
  area = height * width;
  




  printf("The perimeter is: %.2f\n", perimeter);
  printf("The area is: %.2f\n", area);

  return 0;
  
}

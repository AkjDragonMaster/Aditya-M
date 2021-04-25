#include <stdio.h>

int main()
{
  int num1,sub,factorial,num2;
  printf("Enter a number: ");
  scanf("%d", &num1);
  num2 = num1;
  while(num2 != 1){
  	sub = num1-1;
  	factorial = num1 * sub;
  	num2 -=1;
  }
  printf("Factorial is %d", factorial);
}


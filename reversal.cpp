#include<stdio.h>  
 int main()    
{    
int num, reversal=0, i;    
printf("Enter a number: ");    
  scanf("%d", &num);    
  while(num!=0)    
  {    
     i=num%10;    
     reversal=reversal*10+i;    
     num/=10;    
  }    
  printf("Reversed Number: %d",reversal);    
return 0;  
}   

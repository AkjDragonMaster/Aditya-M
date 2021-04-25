#include<stdio.h>
int main()    
{    
    int num,reversal=0,i,copy;    
    printf("Enter a number: ");    
    scanf("%d", &num);    
    copy = num;
    while(num!=0)    
    {    
        i=num%10;    
        reversal=reversal*10+i;    
        num/=10;    
    }    
    printf("Reversal of %d is %d",copy,reversal);    
return 0;  
}   

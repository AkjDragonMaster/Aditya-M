#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    for(int i=1;i < size + 1; i++){
        printf("Enter value of number %d: ", i);
        scanf("%d", &array[i]);
    }
    for(int a = size/2; a != 0; a -= 1){
        printf("The value of element %d is %d \n",a,array[a]);
    }
    for(int a = size/2 + 1; a < size + 1; a++){
        printf("The value of element %d is %d \n",a,array[a]);
    }
    
    return 0;
}

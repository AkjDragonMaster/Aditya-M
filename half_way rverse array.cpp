#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    for(int i=0;i < size; i++){
        printf("Enter value of number %d: ", i);
        scanf("%d", &array[i]);
    }
    for(int a = size - 1; a >= 0; a -= 1){
        printf("The result of array %d is %d; \n",a,array[a]);
    }

    return 0;
}

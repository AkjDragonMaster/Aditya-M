#include <stdio.h>

int main(){

    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int array[size], array2[size], array3[size],difference[size],multiply[size],division[size];
    for(int i = 1;i < size + 1; i++){
        printf("Enter array number %d: ", i);
        scanf("%d", &array[i]);
        printf("Enter 2nd array number %d: ", i);
        scanf("%d", &array2[i]);
        array3[i] = array[i] + array2[i];
        difference[i] = array2 - array;
        multiply[i] = array2*array;
        division[i] = array/array2;
    }
    
    for(int i = 1; i < size + 1; i++){
        printf("\nThe sum of %d and %d is %d \n ",array2[i],array[i], array3[i]);
        printf("\nThe result of %d from %d is %d \n ",array2[i],array[i], difference[i]);
        printf("\nThe result of %d x %d is %d \n ",array[i],array2[i], multiply[i]);
        printf("\nThe result of %d by %d is %d \n ",array2[i],array[i], division[i]);
    }
    
    return 0;
}

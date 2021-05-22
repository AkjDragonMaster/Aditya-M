#include <stdio.h>

int main()
{
    int size,ascending;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];
    for(int i = 1; i < size+1; i++){
        printf("Enter Element %d of Array: ", i);
        scanf("%d", &array[i]);
        array[0] = array[1];
    }
    for(int i = 1; i < size+1; i++){
    	for(int a = 1; a < size + 2; a++){
    		if(array[a] > array[i]){
    			ascending = array[a];
    			array[a] = array[i];
    			array[i] = ascending;
			}
		}
	}
	array[size+2] = array[1];
	printf("The ascending order is: \n");
	for(int a = 1; a < size+2; a++){
		if(a != size){
			printf("%d \n", array[a]);
		}
		}
}

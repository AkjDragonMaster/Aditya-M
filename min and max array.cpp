#include <stdio.h>
int main(){
	int size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int array[size],greater,lesser;
	for(int i = 1; i < size + 1; i++){
		printf("Enter element %d of array: ", i);
		scanf("%d", &array[i]);
	}	
	for(int i = 1; i < size + 1; i += 0){
		for(int b = 1; b < size + 1; b += 0){
			if(array[b] > array[i]){
				greater = array[b];
				lesser = array[i];
				i++;
			}else if(array[b] == array[i]){
				lesser = array[b];
				greater = lesser;				
			}else{
				greater = array[i];
				lesser = array[b];
				b++;
			}
		}
	}
	if(greater != lesser){
	printf("The maximum is %d \n", greater);
	printf("The minimum is %d \n", lesser);	
	}else{
		printf("All the elements are equal");
	}
	
	return (0);
}

#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size],g,g2;
    for(int i = 0; i < size; i++){
        printf("Enter Element %d of Array: ", i);
        scanf("%d", &array[i]);
    }
    g = array[0];
    g2 = array[0];
    for(int i = 0; i < size; i++){
    	if(g < array[i]){
    		g = array[i];
		}
	}
	for(int i = 0; i < size; i++){
		if(array[i] > g2 && g > array[i]){
			g2 = array[i];
		}
	}
    
        printf("The second largest element is %d", g2);

    return 0;
        
    }
    



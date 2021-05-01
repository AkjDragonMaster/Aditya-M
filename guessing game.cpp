#include<stdio.h>
main(){
	int numbers[6] = {0,56,93,51,47,67};
	int input;
	for(int i = 1;i > 0 ; i++){
		printf("Enter your guessing number: ");
		scanf("%d", &input);
		numbers[i] += i;
		if(input == numbers[i]){
			printf("You guessed the number");
			break;
		}else if(input > numbers[i]){
			printf("Too high \n");
		}else{
			printf("Too low \n");
		}
	}
}

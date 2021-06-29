#include<stdio.h>
#include<string.h>
int main(){
	char input[90];
	int m=1;
	printf("Please enter the text for the following shapes to be formed - \n1) triangle \n2) diamond \n3) paralellogram \n4) reactangle \n5) damru \n");
	printf("Please enter statement for the computer to produce an output: ");
	scanf("%s", input);
	switch(strlen(input)){
		case 8: //triangle 
		for(int e = 10; e > 1; --e){
		for(int r = 1; r < m; ++r){
    		printf(" ");
		}
		for(int i = 1; i < e*2-1 ; i++){
	 		printf("*");
		 }
		m++;
		printf("\n");
	}

			break;
		case 7: // diamond
			for(int i = 1; i <= 9; i++){   
        for(int o = 1; o <= 9 - i; o++){
            printf(" ");
        }
        for(int u = 1; u <= i * 2-1; u++){
            printf("*");
        }               

        printf("\n");
    }
    for(int e = 8; e > 1; --e){
    	printf(" ");
		for(int r = 1; r < m; ++r){
    		printf(" ");
		}
		for(int i = 1; i < e*2; i++){
	 		printf("*");
		 }
		m++;
		printf("\n");
	}
	for(int y = 1; y <= 9; y++){
		if(y < 9){
			printf(" ");
		}else{
			printf("*");
		}
	}
						 
			break;
		case 13: // paralellogram
		for(int i = 1; i <= 9; ++i){
    	for(int r = m; r < 9; ++r){
    		printf(" ");
		}
		printf("********");
    	printf("\n");
    	m++;
	}
			break;
		case 9: // rectangle
			for(int u = 1; u < 9; u++){
			for(int r = 1; r < 9; r++){
				printf("*");
			}
			printf("\n");
		}	
			break;
		case 5: // damru
		        for(int e = 9; e > 1; --e){
		for(int r = 1; r < m; ++r){
    		printf(" ");
		}
		for(int i = 1; i < e*2 ; i++){
	 		printf("*");
		 }
		m++;
		printf("\n");
	}
	for(int e = 1; e < 10; ++e){
		for(int r = m; r > 1; --r){
    		printf(" ");
		}
		for(int i = e*2; i > 1 ; i--){
	 		printf("*");
		 }
		m--;
		printf("\n");
	}

		    break;
		
		default : printf("Please give the correct statement");
	}
	
	return 0;
}

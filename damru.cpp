#include <stdio.h>

int main()
{
	int m = 1;
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


    return 0;
}


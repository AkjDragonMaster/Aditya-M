#include <stdio.h>

int main()
{
	int m = 1;
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


    return 0;
}


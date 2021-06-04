#include <stdio.h>

int main()
{
	int n,m=1;
	printf("Enter number of rows: ");
	scanf("%d", &n);
    for(int i = 1; i <= n; i++){   
        for(int o = 1; o <= n - i; o++){
            printf(" ");
        }
        for(int u = 1; u <= i * 2 - 1; u++){
            printf("*");
        }               

        printf("\n");
    }
    for(int e = n-1; e > 1; --e){
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
	for(int y = 1; y <= n; y++){
		if(y < n){
			printf(" ");
		}else{
			printf("*");
		}
	}

    return 0;
}


#include <stdio.h>

int main()
{
	int n, m =1;
	printf("Enter number of rows: ");
	scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
    	for(int r = m; r < n; ++r){
    		printf(" ");
		}
		for(int r = i; r >= 1; --r){
    		printf("*");
		}
    	printf("\n");
    	m++;
	}

    return 0;
}

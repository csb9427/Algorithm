#include <stdio.h>

int main(void){
	int a, b, c, d, i, j;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d", &b);
		for(j=0; j<b; j++){
			printf("=");
		}
		printf("\n");
	}
	return 0;
}
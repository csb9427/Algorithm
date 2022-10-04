#include <stdio.h>

int main(){
	int a, i, j, c;
	scanf("%d", &a);
	for(i=0; i<a; i++){\
		for(c=0; c<i; c++){
			printf(" ");
		}
		for(j=a; j>i; j--){			
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
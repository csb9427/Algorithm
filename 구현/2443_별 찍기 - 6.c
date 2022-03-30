#include <stdio.h>

int main(){
	int a, i, j, c;
	scanf("%d", &a);
	for(j=a; j>0; j--){
		for(i=0; i<a-j; i++){
			printf(" ");
		}
		for(c=2*a-1-2*i; c>0; c--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
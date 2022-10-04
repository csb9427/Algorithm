#include <stdio.h>

int main(){
	int a, b, c, d, i, j;
	scanf("%d", &a);
	c=a-1;
	d=2*a-1;
	for(i=0; i<a; i++){
		for(j=0; j<c; j++){
			printf(" ");
		}
		for(j=0; j<d-2*c; j++){
			printf("*");
		}
		printf("\n");
		c--;
	}
	for(j=a; j>0; j--){
		printf(" ");
		for(i=1; i<a-j+1; i++){
			printf(" ");
		}
		for(c=d-2*i; c>0; c--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>

int main(){
	int a, A, B, C, D, E, i;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
		printf("$%.2f\n", A*350.34 +B*230.90+ C*190.55+ D*125.30+ E*180.90);
	}
	return 0;	
}
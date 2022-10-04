#include <stdio.h>

int main(void){
	int a, b, c, d, a1, b1, c1, d1;
	scanf("%d %d %d %d\n%d %d %d %d", &a, &b, &c, &d, &a1, &b1, &c1, &d1);
	if(a+b+c+d>a1+b1+c1+d1){
		printf("Gunnar");
	}
	else if(a+b+c+d<a1+b1+c1+d1){
		printf("Emma");
	}
	else if(a+b+c+d==a1+b1+c1+d1){
		printf("Tie");
	}
	return 0;
}
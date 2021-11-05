#include <stdio.h>

int main(void){
	int a, b, c, d, e, f, g;
	scanf("%d %d %d %d\n%d %d %d", &a, &b, &c, &d, &e, &f, &g);
	if(e==a){
		printf("%d", 1);
	}
	else if(e==b){
		printf("%d", 2);
	}
	else if(e==c){
		printf("%d", 3);
	}
	else if(e==d){
		printf("%d", 4);
	}
	else{
		printf("%d", 0);
	}
	return 0;
}
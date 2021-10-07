#include <stdio.h>

int main(void){
	int a, b, c, d, e, g;
	scanf("%d", &g);
	if(g%8==5){
		printf("%d", 5);
	}
	else if(g%8==1){
		printf("%d", 1);
	}
	if(g%4==3){
		printf("%d", 3);
	}
	if(g%8==2 || g%8==0){
		printf("%d", 2);
	}
	else if(g%8==4 || g%8==6){
		printf("%d", 4);
	}
}
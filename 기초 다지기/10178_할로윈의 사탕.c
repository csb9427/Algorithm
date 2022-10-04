#include <stdio.h>

int main(void){
	int a, b, c, i;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d", &b, &c);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", b/c, b%c);
	}
	return 0;
}
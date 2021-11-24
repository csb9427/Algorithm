#include <stdio.h>

int main(void){
	int a, b, c, i;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d", &b, &c);
		printf("%d %d\n", (c*2)-b, c-((c*2)-b));
	}
	return 0;
}
#include <stdio.h>

int main(void){
	int a, b, c, d=0, i;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d", &b, &c);
		d=c%b+d;
	}
	printf("%d", d);
	return 0;
}
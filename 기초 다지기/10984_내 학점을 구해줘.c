#include <stdio.h>

int main(void){
	int a, b, c, d=100, e=100, i;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d", &b, &c);
		if(b>c){
			e=e-b;
		}
		else if(b<c){
			d=d-c;
		}
	}
	printf("%d\n%d", d,e);
	return 0;
}
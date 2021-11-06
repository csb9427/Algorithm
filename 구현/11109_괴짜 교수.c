#include <stdio.h>

int main(void){
	int a, b, c, d, e, i;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d %d %d", &b, &c, &d, &e);
		if(b+e*c>c*d){
			printf("do not parallelize\n");
		}
		else if(b+e*c<c*d){
			printf("parallelize\n");
		}
		else{
			printf("does not matter\n");
		}
	}
	return 0;
}
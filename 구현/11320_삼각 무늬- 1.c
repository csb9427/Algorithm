#include <stdio.h>

int main(void){
	int a, b, c, i;
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d", &b, &c);
		if(b*b%c*c==0){
			printf("%d\n", (b*b)/(c*c));
		}
		else if(b*b%c*c!=0){
			printf("%d\n", ((b*b)/(c*c))+1);
		}
	}
	return 0;
}
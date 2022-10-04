#include <stdio.h>

int main(void){
	int a, b, c=0, d, i;
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		scanf("%d", &b);
		if(i!=b){
			c+=1;
		}
	}
	printf("%d", c);
	return 0;
}
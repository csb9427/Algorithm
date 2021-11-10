#include <stdio.h>

int main(void){
	int a, b, c, d, i;
	for(i=0; i<100000; i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(a==0 && b==0 && c==0 && d==0){
			break;
		}
		else{
			printf("%d %d\n", c-b, d-a);
		}
	}
	return 0;
}
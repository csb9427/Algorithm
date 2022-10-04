#include <stdio.h>

int main(){
	int a, b, c=-9999999, i, d=0;
	for(i=0; i<4; i++){
		scanf("%d %d", &a, &b);
		d=d-a;
		d=d+b;
		if(c<d){
			c=d;
		}
	}
	printf("%d", c);
	return 0;
}
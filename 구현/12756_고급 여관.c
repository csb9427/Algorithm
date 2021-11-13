#include <stdio.h>

int main(void){
	int a, b, c, d, e=0, f=0, i;
	scanf("%d %d\n%d %d", &a, &b, &c, &d);
	for(i=0; i<1000000; i++){
		b=b-c;
		e++;
		if(b<=0){
			break;
		}
	}
	for(i=0; i<1000000; i++){
		d=d-a;
		f++;
		if(d<=0){
			break;
		}
	}
	if(e>f){
		printf("PLAYER A");
	}
	else if(e<f){
		printf("PLAYER B");
	}
	else{
		printf("DRAW");
	}
	return 0;
}
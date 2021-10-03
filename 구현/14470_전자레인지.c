#include <stdio.h>

int main(){
	int a, b, c, d, e, i, j;
	scanf("%d\n %d\n %d\n %d\n %d", &a, &b, &c, &d, &e);
	if(a>0){
		printf("%d", (b-a)*e);
	}
	else if(a<0){
		a=-a;
		i=a*c+d+(b*e);
		printf("%d", i);
	}
	return 0;
}
#include <stdio.h>

int main(){
	int a, b, c, d, e, f, g, h;
	scanf("%d %d", &a, &b);
	scanf("%d %d %d %d %d", &d, &e, &f, &g, &h);
	c=-a*b;
	printf("%d %d %d %d %d", c+d, c+e, c+f, c+g, c+h);
	
	return 0;	
}
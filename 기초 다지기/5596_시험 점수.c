#include <stdio.h>

int main(){
	int a, b, c, d, e, f, g, h, i, j;
	scanf("%d %d %d %d\n %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	i = a+b+c+d;
	j = e+f+g+h;
	if(i>=j){
		printf("%d", i);
	}
	else{
		printf("%d", j);
	}
	return 0;
}
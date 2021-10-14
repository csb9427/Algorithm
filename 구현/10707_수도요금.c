#include <stdio.h>

int main(){
	int a, b, c, d, p, i, j;
	scanf("%d\n %d\n %d\n %d\n %d", &a, &b, &c, &d, &p);
	i = a*p;
	if(c>p){
		j = b;
	}
	else if(c<p){
		j = b+(p-c)*d;
	}
	if(i>=j){
		printf("%d", j);
	}
	else if(i<j){
		printf("%d", i);
	}
	return 0;
}
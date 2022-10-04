#include <stdio.h>

int main(){
	int a, b, c, d, e, f, i, j;
	scanf("%d\n %d\n %d\n %d\n %d\n %d", &a, &b, &c, &d, &e, &f);
	if(a<=b && a<=c && a<=d){
		i=b+c+d;
	}
	else if(b<=a && b<=c && b<=d){
		i=a+c+d;
	}
	else if(c<=a && c<=b && c<=d){
		i=a+b+d;
	}
	else if(d<=a && d<=c && d<=b){
		i=a+b+c;
	}
	if(e<=f){
		j=f;
	}
	else if(e>=f){
		j=e;
	}
	printf("%d", i+j);
	return 0;
}
#include <stdio.h>

int main(){
	int a, b, c, d, e, g, i, j;
	scanf("%d\n %d\n %d\n %d\n %d", &a, &c, &d, &b, &e);
	if(a>=c && d>=c){
		i=c;
	}
	else if(c>=d && a>=d){
		i=d;
	}
	else if(c>a && d>a){
		i=a;
	}
	if(b>=e){
		j=e;
	}
	else{
		j=b;
	}
	printf("%d", i+j-50);
	return 0;
	
}
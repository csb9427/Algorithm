#include <stdio.h>

int main(){
	int a, b, c, d, e, f, a1, b1;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	scanf("%d %d", &e, &f);
	if(a==c){
		a1=e;
	}
	else if(a==e){
		a1=c;
	}
	else if(c==e){
		a1=a;
	}
	if(b==d){
		b1=f;
	}
	else if(b==f){
		b1=d;
	}
	else if(d==f){
		b1=b;
	}
	printf("%d %d", a1, b1);
	return 0;
}
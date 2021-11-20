#include <stdio.h>

int main(void){
	long long int a, b, c, d, i;
	scanf("%lld %lld\n%lld", &a, &b, &c);
	if(a+b>=c*2){
		printf("%lld", a+b-c*2);
	}
	else if(a+b<c*2){
		printf("%lld", a+b);
	}
	return 0;
}
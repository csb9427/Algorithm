#include <stdio.h>

int main(void){
	long long int a, b, c, i;
	scanf("%lld", &a);
	for(i=0; i<a; i++){
		scanf("%lld %lld", &b, &c);
		if(b*b%c*c==0){
			printf("%lld\n", (b*b)/(c*c));
		}
		else if(b*b%c*c!=0){
			printf("%lld\n", ((b*b)/(c*c))+1);
		}
	}
	return 0;
}
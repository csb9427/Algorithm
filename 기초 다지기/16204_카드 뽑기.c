#include <stdio.h>

int main(){
	int N, M, K, a, b, c, d;
	scanf("%d %d %d", &N, &M, &K);
	a=N-M;
	b=N-K;
	if(a>=b){
		c=b;
	}
	else if(a<b){
		c=a;
	}
	if(M<=K){
		d=M;
	}
	else if(M>K){
		d=K;
	}
	printf("%d", c+d);
	return 0;
}
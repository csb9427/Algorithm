#include <stdio.h>

int main(){
	int N, i, a=1;
	scanf("%d", &N);
	for(i=0; i<N; i++){
		a=a*2;
	}
	printf("%d", (a+1)*(a+1));
	return 0;
}
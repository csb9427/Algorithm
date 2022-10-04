#include <stdio.h>

int main(){
	int a[10000], b[10000], i;
	for(i=0; i<10000; i++){
		scanf("%d %d", &a[i], &b[i]);
		if(a[i]==0 && b[i]==0){
			break;
		}
		else{
			printf("%d\n", a[i]+b[i]);
		}
	}
	return 0;
}
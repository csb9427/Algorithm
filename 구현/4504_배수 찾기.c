#include <stdio.h>

int main(){
	int a[1000], b, c, i;
	scanf("%d", &b);
	for(i=0; i<1000; i++){
		scanf("%d", &a[i]);
		if(a[i]==0){
			break;
		}
		if(a[i]%b==0){
			printf("%d is a multiple of %d.\n", a[i], b);
		}
		else if(a[i]%b!=0){
			printf("%d is NOT a multiple of %d.\n", a[i], b);
		}
	}
	return 0;
}
#include <stdio.h>

int main(){
	int a[7], b=0, i, c=100;
	for(i=0; i<7; i++){
		scanf("%d", &a[i]);
		if(a[i]%2!=0){
			b=b+a[i];
			if(a[i]<c){
				c=a[i];
			}
		}
	}
	if(b==0){
		printf("%d", -1);
	}
	else if(b!=0){
		printf("%d\n%d", b, c);
	}
	return 0;
}
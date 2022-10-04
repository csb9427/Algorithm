#include <stdio.h>

int main(){
	int a[4], b=100, c=0, d=0, i, e=0;
	for(i=0; i<4; i++){
		scanf("%d", &a[i]);
		if(a[i]>c){
			c=a[i];
		}
		if(a[i]<b){
			b=a[i];
		}
	}
	for(i=0; i<4; i++){
		if(a[i]<c && a[i]>b){
			d=a[i];
		}
	}
	for(i=0; i<4; i++){
		if(a[i]>d && a[i]<c){
			d=a[i];
		}
		else if(a[i]==d && a[i]<c){
			d=d;
		}
	}
	for(i=0; i<4; i++){
		if(d==b){
			d=c;
		}
	}
	if(a[0]==a[1] && a[0]==a[2] && a[0]==a[3]){
		d=c;
	}
	printf("%d", b*d);
	return 0;
}
#include <stdio.h>

int main(){
	int a[10], b[10], i, c=0, d=0, e=0;
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<10; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<10; i++){
		if(a[i]>b[i]){
			c+=3;
			e=0;
		}
		else if(a[i]==b[i]){
			c+=1;
			d+=1;
		}
		else if(a[i]<b[i]){
			d+=3;
			e=1;
		}
		
	}
	if(c>d){
		printf("%d %d\nA", c, d);
	}
	else if(d<c){
		printf("%d %d\nB", c, d);
	}
	else if(c==10 && d==10){
		printf("%d %d\nD", c, d);
	}
	else if(e==0){
		printf("%d %d\nA", c, d);
	}
	else if(e!=0){
		printf("%d %d\nB", c, d);
	}
	
	return 0;		
}
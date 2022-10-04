#include <stdio.h>

int main(){
	int a[10000], b[10000], i;
	for(i=0; i<10000; i++){
		scanf("%d %d", &a[i], &b[i]);
		if(a[i]==0 && b[i]==0){
			break;
		}
		if(a[i]>b[i]){
			if(a[i]%b[i]==0){
				printf("multiple\n");
			}
			else if(a[i]%b[i]!=0){
				printf("neither\n");
			}
		}
		else if(a[i]<b[i]){
			if(b[i]%a[i]==0){
				printf("factor\n");
			}
			else if(b[i]%a[i]!=0){
				printf("neither\n");
			}
		}
	}
	return 0;
}
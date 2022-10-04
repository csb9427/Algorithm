#include <stdio.h>

int main(){
	int a[100000], b[100000], i=0;
	while (1){
		scanf("%d %d", &a[i], &b[i]);
		if(a[i]==0 && b[i]==0){
			break;
		}
		if(a[i]>b[i]){
			printf("Yes\n");
		}
		else if(a[i]<=b[i]){
			printf("No\n");
		}
		i++;
	}
	return 0;
}
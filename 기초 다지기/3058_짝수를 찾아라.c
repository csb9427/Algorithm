#include <stdio.h>

int main(){
	int a, b[7], c=100, d, i, j;
	scanf("%d", &a);
	for(i=0; i<a; i++)
	{
		for(j=0; j<7; j++)
		{
			scanf("%d", &b[j]);
			if(c>b[j] && b[j]%2==0 && b[j]!=0)
			{
				c=b[j];
			}
			if(b[j]%2==0 && b[j]!=0){
				d=d+b[j];
			}
		}
		printf("%d %d\n", d, c);
		d=0;
		c=100;
	}
	return 0;
}

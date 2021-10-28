#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a*(b%10);
    printf("%d\n", c);
    int d = a*((b/10)%10);
    printf("%d\n", d);
    int e = a*((b/100)%10);
    printf("%d\n", e);
    printf("%d\n", a*b);
    
    return 0;
}

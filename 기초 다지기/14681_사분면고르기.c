//음수 양수: 2사분면 양수 양수: 1사분면 양수 음수: 4사분면 음수 음수 3사분면

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    
    if(a>0 && b>0){
        printf("1");
    }
    else if(a<0 && b>0){
        printf("2");
    }
    else if(a<0 && b<0){
        printf("3");
    }
    else{
        printf("4");
    }
    return 0;
}
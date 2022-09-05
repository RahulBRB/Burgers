#include <stdio.h>
int main(void) {
    
    int t;
    scanf("%d", &t);
    
    int a,b;

        while(t--){
        scanf("%d%d", &a,&b);
        if(a>b || b == a){
            printf("%d \n", b);
        }
        else if(b>a || a == b){
            printf("%d \n", a);
        }}
	
	return 0;
}

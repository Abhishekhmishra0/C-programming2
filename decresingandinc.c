#include<stdio.h>
void dec(int n){
    if(n==0) return ;
    printf("%d\n",n);
    dec(n-1);
    return;
}
void incr(int x, int n){
        if(x>n) return;
        printf("%d\n",x);
        incr(x+1,n);
        return;
    }

int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    dec(n);
    incr(1,n);

    return 0;
}
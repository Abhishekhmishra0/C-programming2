#include<stdio.h>
void greet(int n){
    if(n==0)return;
    printf("Good Morning\n ");
    return greet(n-1);
}
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    greet(n);
    return 0; 
}
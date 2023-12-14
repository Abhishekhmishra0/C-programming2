#include<stdio.h>
int factorial(int n){
    if(n==1|| n==0) return 1;
return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int fac = factorial(n);
    printf("%d",fac);
    return 0;

}
#include<stdio.h>
int factorial(int x){  // ncr = n!/r!*(n-r)!
    int fact =1;
    for(int i=2;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = factorial(n)/factorial(r)*factorial(n-r);
    return ncr; // factorial ex : 5! = 5*4*3*2*1
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);

    int ncr =
    printf("%d",ncr);

    return 0;
}
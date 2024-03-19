#include<stdio.h>
int powelog(int a,int b){
    if(b==1) return a;
    if(b%2==0){
        return powelog (a,b/2)*powelog(a,b/2);
    }
    else{
        return powelog(a,b/2) * powelog(a,b/2) *a;
    }
}
int main(){
    int a;
    printf("Enter a base : ");
    scanf("%d",&a);
    int b;
    printf("Enter a power :");
    scanf("%d",&b);
    int p = powelog(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}
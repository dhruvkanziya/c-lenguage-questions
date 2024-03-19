#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a 1st number : ");
    scanf("%d",&a);
    printf("enter a 2nd number : ");
    scanf("%d",&b);
    printf("enter a 3rd number : ");
    scanf("%d",&c);
    if(a>b){
        if (a>c) // b>a
        printf("%d is greatest,a");
        else // a<b<c
        printf("%d is greatest",c);
    }
    else{
        if (b>c)
        printf("%d is greatest",b);
        else// c>b
        printf("%d is greatest",c);
    }
    return 0;
}
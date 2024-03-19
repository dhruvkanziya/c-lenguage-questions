#include<stdio.h>
int main(){
    int a;
    printf("please enter first number :");
    scanf("%d",&a);
    int b;
    printf("please enter second number :");
    scanf("%d",&b);
    int c;
    printf("please enter third number :");
    scanf("%d",&c);
    
     if (a>b && a>c)
     {
        printf("your first number is greatest %d",a);
     }
     else if (b>a && b>c)
     {
        printf("your second number is greatest%d",b);
     }
     else if (c>a && c>b)
     {
        printf("your third number is greatest%d",c);
     }
     return 0;
    
    
}
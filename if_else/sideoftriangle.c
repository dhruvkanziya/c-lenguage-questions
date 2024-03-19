#include <stdio.h>
int main()
{
    int a;
    printf("please enter the first side of triangle : ");
    scanf("%d", &a);
    int b;
    printf("please enter the second side of triangle : ");
    scanf("%d", &b);
    int c;
    printf("please enter the third side of triangle :  ");
    scanf("%d", &c);
    if ((a + b) > c && (a + c) > b && (b + c) > b)
    {
        printf("your enterd value triangle is valid");
    }
    
    else{
        printf("triangle is invalid");
    }
         }



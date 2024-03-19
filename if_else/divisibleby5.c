#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",x);
    if (x%5==0){
        printf("your number is divisiable by 5");
    }
    else if (x%5!=0)
    {
        printf("your number is not divisible by 5");
    }
}    

    
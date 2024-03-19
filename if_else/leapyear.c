#include<stdio.h>
int main(){
    int x;
    printf("please enter year :");
    scanf("%d",&x);
    if (x%4==0)
    {
        printf("enterd year is leapyear :");
    }
    else{
        printf("year is not leapyear");
    }
    return 0;
    
}
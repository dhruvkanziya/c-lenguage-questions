#include<stdio.h>
int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even number");
    }
    else if (x%2!=0){
        printf("odd number");
    }
    return 0;
  
}
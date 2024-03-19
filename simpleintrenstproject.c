#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("please input your principal :");
    scanf("%f",&principal);
    printf("please input your rate:");
    scanf("%f",&rate);
    printf("please input ypur time:");
    scanf("%f",&time);
    si = (principal*rate*time);
    printf("your simple interst is :%f",si);
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct data{
        int day;
        int month;
        int year;
    } date ;
    date a,b;
    // a --> 16/5/2006
    // b --> 5/11/2023
    a.day = 16;
    a.month = 5;
    a.year = 2006;

    b.day = 5;
    b.month = 11;
    b.year = 2023;

    bool flag = true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("the dates are same");
    else printf("the dates are diffrent");

    return 0;
} 
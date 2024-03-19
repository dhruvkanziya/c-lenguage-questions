#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a; //int*x -> int kaadress store karta hai
    // vvip -> *x =7; // a is changed.
    int** y =&x; //int** -> int* ka address store karta hai
    printf("%d\n",a);
    printf("%d\n",*x);// %p se address printhota hai
    printf("%d\n",**y);
    return 0;
}
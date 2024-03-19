#include <stdio.h>
int main()
{
    int a;
    printf("please enter your percentage  ");
    scanf("%d",&a);
    // more than 80  --> A
    // more than 60  --> B
    // more than 40  --> C
    // below than 40 --> D

    if (a > 80) {
        printf("A grade");
    }
    else if (a > 60) {
        printf("B grade");
    }
    else if (a > 40){
        printf("C grade");
    }
    else{
        printf("D grade");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int l;
    printf("please enter length : ");
    scanf("%d",&l);
    int b;
    printf("please enter bredth : ");
    scanf("%d",&b);

    int a = l*b;
    int p = 2*(l+b);

    if (a>p)
    {
        printf("area is greter than perimeter ");
    }
    else if (a<p)
    {
        printf("perimeter is greter than area");
    }
    return 0;

}
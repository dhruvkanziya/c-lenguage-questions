#include<stdio.h>
int main(){
    int a;
    printf("please enter a first person age : ");
    scanf("%d",&a);
    int b;
    printf("please enter a second person age : ");
    scanf("%d",&b);
    int c;
    printf("please enter a third person age : ");
    scanf("%d",&c);
    if (a<b || a<c )
    {
        printf("first person is smallalest : ",a);
    }
    else if (b<c || b<a)
    {
        printf("second person is smallalest : ",b);
    }
    else if (c<a || c<b)
    {
        printf("third person is smallalest : ",c);
    }
    else if (a=b=c)
    {
        printf("all person age is same : ");
    }
    return 0;
}
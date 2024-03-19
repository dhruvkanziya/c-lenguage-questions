#include<stdio.h>
int main(){
    int n;
    printf("Enter a no of rows : ");
    scanf("%d",&n);
    int a=1;
    int b=n-1;
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=b;j++){
            printf(" ");
        }
        b = b - 1;
        for(int k=1;k<=a;k++){
            printf("%d",c);
            c++;
            
        }
        a = a + 2;
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter a no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
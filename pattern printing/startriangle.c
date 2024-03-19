#include<stdio.h>
int main(){
    int n;
    printf("Enter a no of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // no of lines / rows -> i
        for(int j=1;j<=i;j++){ // no of colums -> j
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a no of lines : ");
    scanf("%d", &n);
    int nsp = 0; // or ml -1
    int nst =n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){// spaces
            printf(" ");
        }
        for(int k=1;k<=nst;k++){ //stars
            printf("*");
            }
            nsp++;
            nst--;
            printf("\n");
            }
            return 0;
}
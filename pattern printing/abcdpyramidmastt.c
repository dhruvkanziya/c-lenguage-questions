#include <stdio.h>
int main()
{
    int n;
    printf("Enter a no of lines : ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    
    
    for(int i=1;i<=2*n+1;i++){ // pehli line
        char ch = (char)(i+64);
        printf("%c",ch);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        char ch = a+ 64;
        for(int j=1;j<=nst;j++){ // stars
            printf("%c",ch);
            ch++;
        }
        for(int k=1;k<=nsp;k++){ // spaces
            printf(" ");
            ch++;
        }
        for(int j=1;j<=nst;j++){ // stars
            printf("%c",ch);
            ch++;
        }
        nst--;
        nsp+=2;
        printf("\n");

    }
    return 0;

}
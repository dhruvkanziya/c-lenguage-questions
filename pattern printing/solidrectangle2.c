
#include<stdio.h>
int main(){
    int n;
    printf("enter a number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of coloums : ");
    scanf("%d",&m);

    // *****.... upto n no of stars

    for(int i=1;i<=n;i++){// outer loop  --> no of lines
        for(int i=1;i<=m;i++){ // linner loop --> no of star in each line
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}
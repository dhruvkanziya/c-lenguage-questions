#include<stdio.h>
int main(){
    int n;
    printf("Enter a no of rows : ");
    scanf("%d",&n);
    
    int nst =1;// number of abcd
    int nsp =n - 1; // number of space
    int a = 1;
    for(int i = 1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        char ch = a+64;
       
        nsp = nsp -1;
        for(int j=1;j<=nst;j++){
        printf("%c",ch);
         ch ++;
        
        }
        nst = nst + 2;
        
        printf("\n");
    }
     
        
    return 0;
}
#include<stdio.h>
int main(){
    int n;
     printf("Enter a number : ");
     scanf("%d",&n);
     for(int i=2;i<=n-1;i++){
        if(n%i==0){
        printf("Our number is composite\n");
        break;
        }  
       else{
            printf("The number is prime\n");
            break;
        }
     }
     return 0;

}
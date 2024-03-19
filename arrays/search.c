#include<stdio.h>
int main(){
    int arr[7]={12,21,30,42,55,6,7};
    int x = 1;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            printf("%d is present in the array and its index is %d",x,i);
            break;
        }
        else{
            printf("%d is not present in arrays",x);
            break;
        }
    }
    return 0;
}
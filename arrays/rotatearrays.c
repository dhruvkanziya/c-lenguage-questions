#include<stdio.h>
void reverce(int arr[],int si,int ei){
    
    for(int i=si;ei=j;i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
    
    int main(){
        int arr[7] = {1,2,3,4,5,6,7};
        int n= 7;
        int k = 3;
        k = k% n;
        reverce(arr,0,n-1);
        reverce(arr,0,n-1);
        reverce(arr,0,n-1);
        for(int i=0;i<=6;i++){
            printf("%d ",arr[i]);
        }
        return 0;
}
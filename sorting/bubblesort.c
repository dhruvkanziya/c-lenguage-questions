#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5] = {5,4,3,2,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // bubbble sort
    for(int i=0;i<n-1-i;i++){
        bool flag = true;// array is not started yet
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
}
}
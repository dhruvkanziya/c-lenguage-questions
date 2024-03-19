#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows and colume : ");
    scanf("%d ",&n);
    printf("Enter all the elements : \n");
    int arr[n][n];
    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            //swap arr[i][j] arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
       
            }
             //rotate
        for(int i=0;i<n;i++){
            int j=0;
            int k=n-1;
            while(j<k){
                //swap arr[i][j] and arr[i][k]
                int tamp = arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]=tamp;
                j++;
                k--;
        }
    }
    // output
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");

}
#include<stdio.h>
int main(){
    int r;
    printf("Enter a no of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter a no of columes : ");
    scanf("%d",&c);
    printf("Enter all the elements \n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //123
    //456

    //14
    //25
    //36
    printf("\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
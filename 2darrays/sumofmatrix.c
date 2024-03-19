#include<stdio.h>
int main(){
    int r;
    printf("Enter a no of rows");
    scanf("%d",&r);
    int c;
    printf("Enter a no of columes");
    scanf("%d",&c);
    printf("Enter all the elements \n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",arr[i][j]);
        }
        printf("\n");

}
int sum = 0;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+= arr[i][j];
        }
}
printf("the sum of given matrix is %d",sum);
}

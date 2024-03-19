#include<stdio.h>
int main(){
    int m;
    printf("Enter no of rows of 1 st matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of 1 st matrix : ");
    scanf("%d",&n);

    // input the first matrix 
    int a[m][n];
    printf("\nEnter  element of  1st matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
}
// spiral print
int minr = 0;
int maxr = m-1;
int minc = 0;
int maxc = n-1;
int tne = m*n;
int count = 0;
while(count<tne){
    // print minimum row
    for(int j=minc;j<=minc;j++){
        printf("%d ",a[minr][j]);
        count++;
    }
    minr++;
    if(count>=tne) break;
    // print maximum column
    for(int i=minr;i<=maxr;i++){
        printf("%d ",a[i][maxc]);
        count++;
    }
    maxc--;
    if(count>=tne) break;
    //print the maximum row
    for(int j=maxc;j>=minc;j--){
        printf("%d ",a[maxr][j]);
        count++;
    }
    maxr--;
    if(count>=tne) break;
    //print the minimum column
    for(int i = maxr;i>=minr;i--){
        printf("%d ",a[i][minc]);
        count++;
    }
    minc++;
    if(count>=tne) break;
}
return 0;
}
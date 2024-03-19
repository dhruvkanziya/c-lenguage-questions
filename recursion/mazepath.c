#include<stdio.h>
//cr=curront row , cc= curraont colume , er=enf=ding row , ec = ending colume
int maze (int cr,int cc,int er,int ec){
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){ // only right ways call
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways  += maze(cr+1,cc,er,ec);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter no of rows of the maze : ");
    scanf("%d",&n);
    int m;
    printf("Emter no of colums of the maze : ");
    scanf("%d",&m);
    int noofways = maze (1,1,n,m);
    printf("%d",noofways);
    return 0;  
}
#include<stdio.h>
int main(){
    int marks[10] = {99,95,65,20,15,35,25,87,91,41};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;
    
}

    
#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        printf("%d ",i);
        char ch = (char)i;
        printf("%c --> ",ch);
        printf("%d\n",i);
    }
    return 0;
}
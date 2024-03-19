#include<stdio.h>
#include<string.h>
int main(){
    struct book {
        char name[5];
        int noOfpages;
        float price ;

    } a,b,c ;

    a.noOfpages = 150;
    a.price=411.52;
    strcpy(a.name,"panchtantra");

    
    printf("%d\n ",a.noOfpages);
    printf("%f\n ",a.price);
    printf("%s\n",a.name);

    return 0;
}

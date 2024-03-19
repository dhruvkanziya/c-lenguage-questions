#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer {
        char name[20];
        int age;
        int noOfmatches;
        float average;
    } cricketer ;

    cricketer arr[3]; 
    for(int i=0;i<3;i++){
        char str[15];
        scanf("%[^\n]s",str);
        strcpy(arr[i].name,str);
        scanf("%d",&arr[i].noOfmatches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf("name : %s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("Number of matches : %d\n",arr[i].noOfmatches);
        printf("Average : \n",arr[i].average);
    }
    return 0;
}
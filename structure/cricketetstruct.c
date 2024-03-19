#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer {
        char name[20];
        int age;
        int noOfmatches;
        float average;
    } cricketer ;

    cricketer arr[3]; // arr[0], arr[1],... arr[2]
    arr[0].age = 33;
    arr[0].noOfmatches = 150;
    arr[0].average = 90;
    strcpy(arr[0].name,"Rohit sharma");

    arr[1].age = 25;
    arr[1].noOfmatches = 100;
    arr[1].average = 70;
    strcpy(arr[1].name,"virat kohli");

    arr[2].age = 19;
    arr[2].noOfmatches = 40;
    arr[2].average = 60;
    strcpy(arr[2].name,"shubhman gil");

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("age : %d\n",arr[i].age);
        printf(" average : %f\n",arr[i].average);
        printf(" noOfmatches : %d\n",arr[i].noOfmatches);
    }
    return 0;
}
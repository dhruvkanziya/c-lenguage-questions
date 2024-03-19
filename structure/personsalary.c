#include<stdio.h>
#include<string.h>
int main(){
    struct person {  //user defined data type
        int salary;
        int age;
        char name[50];
    }a,b;
    a.salary = 200000;
    a.age = 22;
    strcpy(a.name,"dhruv");
    printf(" name is %s\n",a.name);

    printf(" salary is %d\n",a.salary);
    printf(" age is %d\n",a.age);
    
    return 0;
    }
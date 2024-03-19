#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;

    pokemon arr[3]; // arr[0], arr[1],... arr[2]
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Charizard");

    arr[1].attack = 40;
    arr[1].hp = 200;
    arr[1].speed = 90;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"mewto");

    arr[2].attack = 22;
    arr[2].hp = 80;
    arr[2].speed = 130;
    arr[2].tier = 'C';
    strcpy(arr[2].name,"pikachu");

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("Attack : %d\n",arr[i].attack);
        printf(" hp : %d\n",arr[i].hp);
        printf(" Speed : %d\n",arr[i].speed);
        printf(" Tier : %c\n",arr[i].tier);
    }
    return 0;
}
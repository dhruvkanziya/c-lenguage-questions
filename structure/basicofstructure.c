#include<stdio.h>
int main(){
    struct pokemon {  //user defined data type
        int hp;
        int speed;
        int attack;
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 100;
    pikachu.speed = 40;
    printf("%d",pikachu.attack);
    return 0;
    }
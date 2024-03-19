#include<stdio.h.>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon ;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    }legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    }
    
    legendarypokemon mewtwo;
    strcpy(mewtwo.abbility,"pressure");
    mewtwo.normal.hp = 105;
    mewtwo.normal.attack = 180;
    mewtwo.normal.speed = 130;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.tier = 's';
    return 0;

    }
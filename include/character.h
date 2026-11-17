#ifndef CHARACTER_H
#define CHARACTER_H

typedef struct 
{
    char name[32];
    float hp;
    float max_hp;
    int atk;
    int spd;
    int def;
    int gauge;
} Character;



#endif 
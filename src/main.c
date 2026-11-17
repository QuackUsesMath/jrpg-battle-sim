#include <stdio.h>
#include "character.h"

#define MAX_GAUGE 100
/*
okay what am I supposed to do now.

look at this carefully. Stop zoning out.arerwewrwr. I need tick. ai which is just a function that chooses numbers. what type should they all be. 
for now I will start all functions with void, and change them if I need to, else I wont

[]tick system
[]battle system (take dmg, get dmg every alt turn)
[]choose atk 
[]ATB bar, HP bar
*/



//define everything that should happen in a tick
void tick(Character *c)
{
    
    c->gauge+=c->spd;        //woah was that fucking auto correct? damn. it went from . to -> on its own! micro ur awesoft!

}

int main()
{
    Character party[2] = {
        {"HeavyDude",100,100,30,10,15,0},
        {"Flash",150,200,15,30,15,0}
    };

    int t=0;
    for(t=0;t<40;t++)
    {
        for(int i=0;i<2;i++)
        {
            tick(&party[i]);
            if (party[i].gauge>=MAX_GAUGE)
            {
                party[i].gauge -= MAX_GAUGE;     //this also keeps any overflow (hehe)
                printf("tick %d: %31s is ready to attack!!Choose an action!",t,party[i].name);
                getchar();
            }
        }
    }

}
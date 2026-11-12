#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct
{
    char name[255];
    float hp;
    float maxHP;
    float dmg;
    int spd;

} character;

void draw_hp_bar(character enemy,character player)
{
    printf("\n===============================================");
    printf("\n%s",enemy.name);
    printf("%50s %.0f/%.0f","HP:",enemy.hp,enemy.maxHP);
    printf("\n%s",player.name);
    printf("%50s %.0f/%.0f","HP:",player.hp,player.maxHP);
    printf("\n===============================================\n");
}

int main()
{
    //load characters,frame
    character Dragon;
    strcpy(Dragon.name,"Ancient Dragon Vodka");
    //strcat(Dragon.name,'\0');
    Dragon.maxHP = 100;
    Dragon.spd = 10;
    Dragon.dmg = 2.5;

    character Player;
    strcpy(Player.name, "The Great Booze Man");
    Player.dmg = 1;
    Player.maxHP = 20;
    Player.spd = 5;
    //trigger an event automatically
    printf("FIGHT!!!");
    printf("\n\n\n");
    Dragon.hp = Dragon.maxHP;
    Player.hp = Player.maxHP;
    draw_hp_bar(Dragon,Player);     //auto draws new line at the end
    while (Dragon.hp != 0)
    {
    printf("Press space to attack!");
    int cont = getch();     //let me access byte prefixes for arrow keys and ascii values for ascii coded keys
    if (cont == ' ')
    {
        Dragon.hp -= 10;
    }
    printf("\n%s attacks %s\n",Player.name,Dragon.name);
    draw_hp_bar(Dragon,Player);
    printf("%s attacks %s",Dragon.name,Player.name);
    Player.hp -= 1;
    draw_hp_bar(Dragon,Player);
    }

    //run appropriate function to complete the event
    //check flag for the event and move to the next one, updating player character values.
}


/*
->EMPATHY:
    Feeling emotions. Connecting to the problem at a deeper level.
->DEFINE:
    Causes, who are suffering the effects (include nature for bonus points)
->IDEATE:
    Collect the existing solutions if they exist or propose a new one.
->PROTOTYPE:
    You need to develop a working prototype
->TEST:
    Test your solution in the real world
*/
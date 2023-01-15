//Include Libraries
#include <stdio.h>
#include <stdlib.h>

//Sets up intial Player Stats
char* Player="playername\0";
int health=100;
int strength=0;
int wisdom=0;
int stamina=0;

//Dice
float diceFloat;

//GoingDirection
;char* playerDirect="default\0";

//Loaded Map Environment
int mapWidth=400;
int mapHeight=400;

int spawnSpotX=200;
int spawnSpotY=200;

                              // mapGen() is the the function you call once you set the play's playerDirect variable.
void mapGen(){
    if (playerDirect="north\0") // Player Goes North
    {
        int spawnSpotX=200;
        int spawnSpotY=0;
        char* playerDirect="default\0";
    }
    if (playerDirect="south\0") // Player Goes South
    {
        int spawnSpotX=200;
        int spawnSpotY=400;
        char* playerDirect="default\0";
    }
    if (playerDirect="east\0")  // Player Goes East
    {
        int spawnSpotX=400;
        int spawnSpotY=200;
        char* playerDirect="default\0";
    }
    if (playerDirect="west\0")  // Player Goes West
    {
        int spawnSpotX=0;
        int spawnSpotY=200;
        char* playerDirect="default\0";
    }

}

//Save System


//Dice System
void DiceGen(){
    float diceFloat = rand() % 1;   //Dice need worked on, they don't seem to have a max no matter what I do.
}



//Player Stat Checks
// Checks Stength stat for action
void StrengthCheck() {
    printf("%d", strength);
    DiceGen();
    if (diceFloat>strength)
    {
        printf("Skill Check Success.");
    }
    else
    {
        printf("Skill Check Failure");
    }
}

// Checks Wisdom stat for action
void WisdomCheck() {
    printf("%d", wisdom);
}

// Checks Stamina stat for action
void StaminaCheck(){
    printf("%d", stamina);
}


//Main Program Section
int main() {
    StrengthCheck();
    WisdomCheck();
    StaminaCheck();
    return 0;
}

//Include Libraries
#include <stdio.h>

//Sets up intial Player Stats
char* Player="playername";
int health=100;
int strength=0;
int wisdom=0;
int stamina=0;

//GoingDirection
char* playerDirect="default";

//Loaded Map Environment
int mapWidth=400;
int mapHeight=400;

int spawnSpotX=200;
int spawnSpotY=200;

void mapGen(){
    if (playerDirect="north") // Player Goes North
    {
        int spawnSpotX=200;
        int spawnSpotY=0;
    }
    if (playerDirect="south") // Player Goes South
    {
        int spawnSpotX=200;
        int spawnSpotY=400;
    }
    if (playerDirect="east")  // Player Goes East
    {
        int spawnSpotX=400;
        int spawnSpotY=200;
    }
    if (playerDirect="west")  // Player Goes West
    {
        int spawnSpotX=0;
        int spawnSpotY=200;
    }

}

//Save System


//Custom Functions
// Checks Stength stat for action
void StrengthCheck() {
    printf("%d", strength);
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

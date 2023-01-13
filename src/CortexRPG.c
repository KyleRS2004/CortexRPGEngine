//Include Libraries
#include <stdio.h>

//Player Variables
char* Player="playername";
int health=100;
int strength=0;
int wisdom=0;
int stamina=0;

//Map Environment



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


#include "functions.h"

int main(int argc ,char *argv[]) {
    Player player1;
    Ship sloop;

    Captain c;

    strcpy(c.name, "John Smith");
    c.health = 100;
    c.experience = 0;

    sloop.captain = &c;

    strcpy(sloop.type, "Schaluppe");
    sloop.crew = 30;

    for(int i = 0; i<12; i++) {
        if(addShip(&player1, &sloop) == OUT_OF_BOUNDS) {
            printf("Player already has 10 Ships!\n");
        }
    }

    printPlayer(&player1);



    return SUCCESS;
}

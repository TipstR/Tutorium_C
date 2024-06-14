#include "functions.h"

int main(int argc ,char *argv[]) {
    Player *player1 = createPlayer(10000, "Spieler1");

    Captain *c = createCaptain("John Smith", 100, 0);

    addShip(player1, createShip("Sloop", 30, c));

    printf("%s", player1->fleet[0].type);




    return SUCCESS;
}

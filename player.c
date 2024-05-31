//
// Created by thert on 31.05.2024.
//

#include "player.h"

int addShip(Player *player, Ship *ship) {
    if(player->shipCount >= 10) {
        return OUT_OF_BOUNDS;
    }
    player->fleet[player->shipCount] = ship;
    player->shipCount += 1;

    return SUCCESS;
}

void printPlayer(Player *player){
    printf("Name: %s\n", player->name);
    printf("Gold: %d\n", player->gold);
    printf("Ships:\n");

    int i;
    for (i = 0; i<player->shipCount; i++) {
        printf("%s [Crew: %d]\n", player->fleet[i]->type, player->fleet[i]->crew);

    }
}
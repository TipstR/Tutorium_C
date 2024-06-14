//
// Created by thert on 31.05.2024.
//

#include "player.h"

Player *createPlayer(int gold, char *name){
    Player *newPlayer = (Player*)malloc(sizeof(Player));

    if (newPlayer == NULL) {
        fprintf(stderr, "Couldn't allocate memory for Player!\n");
        return NULL;
    }

    Ship *fleet = (Ship*)malloc(sizeof(Ship) * MAX_FLEET_SIZE);

    if (fleet == NULL) {
        fprintf(stderr, "Couldn't allocate memory for Fleet!\n");
        free(newPlayer);
        return NULL;
    }

    newPlayer->gold = gold;
    strcpy(newPlayer->name, name);
    newPlayer->fleet = fleet;
    newPlayer->shipCount = 0;

    return newPlayer;
}


int deletePlayer(Player *player) {
    if ((player == NULL) || (player->fleet == NULL)) {
        return 1;
    }

    free(player->fleet);
    free(player);
    return 0;
}

int addShip(Player *player, Ship *ship) {
    if(player->shipCount >= 10) {
        return OUT_OF_BOUNDS;
    }
    player->fleet[player->shipCount] = *ship;
    player->shipCount += 1;

    return SUCCESS;
}

void printPlayer(Player *player){
    printf("Name: %s\n", player->name);
    printf("Gold: %d\n", player->gold);
    printf("Ships:\n");

    int i;
    for (i = 0; i<player->shipCount; i++) {
        printf("%s [Crew: %d]\n", player->fleet[i].type, player->fleet[i].crew);

    }
}
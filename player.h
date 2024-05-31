//
// Created by thert on 31.05.2024.
//

#include "ship.h"
#include "stdio.h"

#define SUCCESS 0
#define OUT_OF_BOUNDS 2

#ifndef C_PLAYER_H
#define C_PLAYER_H

typedef struct {
    int gold;
    char name[100];
    Ship *fleet[10];
    int shipCount;
} Player;
int addShip(Player *player, Ship *ship);
void printPlayer(Player *player);


#endif //C_PLAYER_H

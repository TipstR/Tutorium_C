//
// Created by thert on 31.05.2024.
//
#ifndef C_PLAYER_H
#define C_PLAYER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ship.h"

#define SUCCESS 0
#define OUT_OF_BOUNDS 2

#define MAX_FLEET_SIZE 10

typedef struct {
    int gold;
    char name[100];
    Ship *fleet;
    int shipCount;
} Player;

Player *createPlayer(int gold, char *name);
int deletePlayer(Player *player);


int addShip(Player *player, Ship *ship);
void printPlayer(Player *player);


#endif //C_PLAYER_H

//
// Created by thert on 14.06.2024.
//

#include "ship.h"

Ship* createShip(char* type, int crew, Captain *captain) {
    Ship *newShip = (Ship *)malloc(sizeof(Ship));
    if (newShip == NULL) {
        fprintf(stderr, "Couldn't allocate memory for Ship!\n");
        return NULL;
    }

    strcpy(newShip->type, type);
    newShip->crew = crew;
    newShip->captain = captain;
    return newShip;
}

int deleteShip(Ship *ship){
    if(ship == NULL) {
        return 1;
    }
    free(ship);
    return 0;
}
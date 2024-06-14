//
// Created by thert on 31.05.2024.
//
#ifndef C_SHIP_H
#define C_SHIP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "captain.h"


typedef struct {
    char type[100];
    int crew;
    Captain * captain;
} Ship;

Ship* createShip(char* type, int crew, Captain *captain);
int deleteShip(Ship *ship);




#endif //C_SHIP_H

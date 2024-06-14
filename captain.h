//
// Created by thert on 31.05.2024.
//

#ifndef C_CAPTAIN_H
#define C_CAPTAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int health;
    int experience;
} Captain;

Captain *createCaptain(char *name, int health, int experience);
int deleteCaptain(Captain *captain);

#endif //C_CAPTAIN_H

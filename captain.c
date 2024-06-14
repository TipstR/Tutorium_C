//
// Created by thert on 14.06.2024.
//

#include "captain.h"

Captain *createCaptain(char *name, int health, int experience) {
    Captain *newCaptain = (Captain *) malloc(sizeof(Captain));

    if (newCaptain == NULL) {
        fprintf(stderr, "Couldn't allocate memory for Captain!\n");
        return NULL;
    }

    strcpy(newCaptain->name, name);
    newCaptain->health = health;
    newCaptain->experience = experience;
    return newCaptain;
}


int deleteCaptain(Captain *captain) {
    if (captain == NULL) {
        return 1;
    }
    free(captain);
    return 0;
}
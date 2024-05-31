//
// Created by thert on 31.05.2024.
//

#include "captain.h"

#ifndef C_SHIP_H
#define C_SHIP_H

typedef struct {
    char type[100];
    int crew;
    Captain * captain;
} Ship;



#endif //C_SHIP_H

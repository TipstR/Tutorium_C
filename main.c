#include <stdio.h>
#include <string.h>

struct Ship {
    char type[100];
    int crew;
};

struct Player {
    int gold;
    char name[100];
    struct Ship *fleet[10];
    int shipCount;
};

void addShip(struct Player *player, struct Ship *ship) {
    player->fleet[player->shipCount] = ship;
    player->shipCount += 1;
}

void printPlayer(struct Player *player){
    printf("Name: %s\n", player->name);
    printf("Gold: %d\n", player->gold);
    printf("Ships:\n");

    int i;
    for (i = 0; i<sizeof(player->shipCount); i++) {
            printf("%s [Crew: %d]\n", player->fleet[i]->type, player->fleet[i]->crew);

    }
}

int main(int argc ,char *argv[]) {
    struct Player player1;
    struct Ship sloop;
    struct Ship frigate;

    player1.gold = 2000;
    strcpy(player1.name, "Neuer Spieler");

    sloop.crew = 30;
    strcpy(sloop.type, "Sloop");
    frigate.crew = 200;
    strcpy(frigate.type, "Frigate");

    addShip(&player1, &sloop);
    addShip(&player1, &frigate);

    int input;

    printf("Willkommen zu unserem Spiel\n");

    printf("Was willst du tun? ");

    scanf("%d", &input);

    switch (input) {
        case 1:
            printPlayer(&player1);
            break;

    }

    return 0;
}

//Definierar player
//Postition, movement osv.

#ifndef PLAYER_H
#define PLAYER_H

#include <SDL_events.h>

typedef struct
{
    int x;
    int y;
    int speed;
    char name[20];
}Player;

int PlayerWalk(Player *player, SDL_Event event);

Player CreatePlayer(int x, int y);

#endif // PLAYER_H
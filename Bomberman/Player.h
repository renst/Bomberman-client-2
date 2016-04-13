//Definierar player
//Postition, movement osv.

#ifndef PLAYER_H
#define PLAYER_H
#include <SDL_image.h>
#include <SDL_events.h>
typedef struct
{
    int x;
    int y;
    float speed;
    char name[20];
}Player;

typedef struct{
    Player player;

    SDL_Texture *playerImg;
}Game;

int PlayerWalk(Game *game,const Uint8 *state);

Player CreatePlayer(int x, int y);

#endif // PLAYER_H
#include "Player.h"

int PlayerWalk(Player *player,const Uint8 *state) {

    if(state[SDL_SCANCODE_A])
    {
        player->x -= 2;
    }
    if(state[SDL_SCANCODE_D])
    {
        player->x += 2;
    }
    if(state[SDL_SCANCODE_W])
    {
        player->y -= 2;
    }
    if(state[SDL_SCANCODE_S])
    {
        player->y += 2;
    }
    return 0;
}


Player CreatePlayer(int x, int y) {

    Player ply;

    ply.x = x;
    ply.y = y;

    return ply;
}


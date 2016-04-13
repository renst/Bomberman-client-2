#include "Player.h"

int PlayerWalk(Game *game,const Uint8 *state) {

    if(state[SDL_SCANCODE_A])
    {
        game->player.x -= 2;
    }
    if(state[SDL_SCANCODE_D])
    {
        game->player.x += 2;
    }
    if(state[SDL_SCANCODE_W])
    {
        game->player.y -= 2;
    }
    if(state[SDL_SCANCODE_S])
    {
        game->player.y += 2;
    }
    return 0;
}


Player CreatePlayer(int x, int y) {

    Player ply;

    ply.x = x;
    ply.y = y;

    return ply;
}


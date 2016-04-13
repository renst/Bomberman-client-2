#include "Player.h"

int Walk(Player *player, SDL_Event event) {

    switch(event.key.keysym.sym) {
        case SDLK_UP:
            player->y -= 2;
            break;

        case SDLK_DOWN:
            player->y += 2;
            break;

        case SDLK_LEFT:
            player->x -= 2;
            break;

        case SDLK_RIGHT:
            player->x += 2;
            break;
    }
    return 0;
}


Player CreatePlayer(int x, int y) {

    Player ply;

    ply.x = x;
    ply.y = y;

    return ply;
}


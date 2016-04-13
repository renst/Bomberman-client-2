//
// Created by Timothy Friberg Holmsten on 11/04/16.
//

#include "level2.h"

int InitLevel2(SDL_Renderer *renderer) {

    SDL_Rect rect = { 50, 50, 200, 200 };
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderFillRect(renderer, &rect);

    return 0;
}
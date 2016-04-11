#include "Level1.h"

//Definition av funktionerna i headern


int InitLevel1(SDL_Renderer *renderer) {

    SDL_Rect rect = { 50, 50, 200, 200 };
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);

    return 0;
}
#include "Level1.h"
#include "LevelManager.h"

//Definition av funktionerna i headern


int DrawLevel(SDL_Renderer *renderer) {

    SDL_Rect rect = { 50, 50, 200, 200 };
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderFillRect(renderer, &rect);
    return 0;
}
//Hej
int Draw() {
    printf("hej");
    return 0;
}




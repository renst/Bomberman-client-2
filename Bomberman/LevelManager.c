#include "LevelManager.h"

int LevelInit(SDL_Renderer *renderer){

    //DrawLevel(renderer);

    // Ladda vilken level
    // Ladda upp i buffern

    return 0;
}

void LevelManage(SDL_Renderer *renderer, int levelSelect) {

    int TotalAmountOfLevels = 2;

    int (*p[TotalAmountOfLevels])(SDL_Renderer *renderer);

    p[0]= InitLevel1;
    p[1]= InitLevel2;

    (*p[levelSelect])(renderer);


}






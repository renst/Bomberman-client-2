#include "LevelManager.h"

int LevelInit(SDL_Renderer *renderer){

    //DrawLevel(renderer);

    // Ladda vilken level
    // Ladda upp i buffern

    return 0;
}

void LevelManage(SDL_Renderer *renderer, int levelSelect) {

    // Find a better way
    if(levelSelect == 1){
        InitLevel1(renderer);
    }
    else if(levelSelect == 2){
        InitLevel2(renderer);
    }
}






#ifndef LEVEL_HANDLER_H
#define LEVEL_HANDLER_H

#include "../../GameLevel.h"
#include "../../level/levels/Level1.h"
#include "../../level/levels/level2.h"
#include <SDL_video.h>
#include <SDL_render.h>

int LevelInit(SDL_Renderer *renderer);

void LevelManage(SDL_Renderer *renderer,int levelSelect);

#endif //LEVEL_HANDLER_H
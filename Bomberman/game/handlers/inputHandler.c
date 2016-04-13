//
// Created by martin on 4/13/16.
//


#include "inputHandler.h"

void ProcessEvents(bool *running, Game *game)
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        if(event.type == SDL_QUIT)
        {
            *running = false;
        }
    }

    const Uint8 *state = SDL_GetKeyboardState(NULL);
    PlayerWalk(game,state);
}
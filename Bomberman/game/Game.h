#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include "handlers/LevelHandler.h"
#include "../Player.h"

int GameLoop(SDL_Window *window, SDL_Renderer *renderer);

SDL_Window * InitWindow(int w, int h, char *title);

SDL_Renderer * InitRenderer(SDL_Window *window);

#endif // GRAPHICS_H
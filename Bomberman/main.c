
#include "game/Game.h"
#include <SDL.h>
#include "level/levels/Level1.h"
#include "game/handlers/LevelHandler.h"
#include <stdio.h>



int main(int argc, char **argv)
{

    // Creating a window
	SDL_Window *window;
	window = InitWindow(1280,720,"hej");

    // Creating a renderer
	SDL_Renderer *renderer;
	renderer = InitRenderer(window);

    // The game loop
    GameLoop(window, renderer);

	//GameLoop(window, renderer);

	// Init alla funktioner

	// n�got i denna stil
	// loop n�r spelet inte �r slut
	// get input
	// update
	// draw to buffer
	// draw buffer to screen

}
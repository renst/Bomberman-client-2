
#include "Graphics.h"
#include <SDL.h>
#include "level/levels/Level1.h"
#include "LevelManager.h"
#include <stdio.h>


//Main loop, kallar på alla andra funktioner, försök att ha så lite i denna som möjligt allt ska vara enkelt att ändra inget hård kodat


int main(int argc, char **argv)
{
	SDL_Window *window;

	window = InitWindow(400,400,"hej");

	//GameLoop();
	SDL_Renderer *renderer;

	renderer = InitRenderer(window);

	//LevelInit(window, renderer);



    GameLoop(window, renderer);

	//GameLoop(window, renderer);

	// Init alla funktioner

	// något i denna stil
	// loop när spelet inte är slut
	// get input
	// update
	// draw to buffer
	// draw buffer to screen

}
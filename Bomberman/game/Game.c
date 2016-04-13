#include "Game.h"
#include "../Player.h"

//Flytta till inputManager
void ProcessEvents(bool *running, Player *player)
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
	PlayerWalk(player,state);
}

//Flytta till renderer
void doRender(SDL_Renderer *renderer, Player *player)
{
	//Rensa render
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderClear(renderer);


	//Väljer vilken level och ritar den underst av allt;
	LevelManage(renderer, 0);

	SDL_Rect rect = { player->x, player->y, 200, 200 };
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	SDL_RenderFillRect(renderer, &rect);

	//Visa vad som ritas
	//SDL_UpdateWindowSurface(window);

	SDL_RenderPresent(renderer);

}

int GameLoop(SDL_Window *window, SDL_Renderer *renderer) {

	bool running = true;

	Player player = CreatePlayer(50, 50);
	//player.x = 50;
	//player.y = 50;
	while (running)
	{
		ProcessEvents(&running, &player);
		//Kalla på renderer och update

		doRender(renderer, &player);

		//Tar mindre proccesor kraft
		SDL_Delay(10);
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}

SDL_Window * InitWindow(int w, int h, char *title) {

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window = SDL_CreateWindow(
			title,
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			w,
			h,
			SDL_WINDOW_OPENGL);

	return window;
}

SDL_Renderer * InitRenderer(SDL_Window *window) {

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Renderer *renderer = SDL_CreateRenderer(
			window,
			-1,
			SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return renderer;
}


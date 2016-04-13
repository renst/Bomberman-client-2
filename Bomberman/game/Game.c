
#include "Game.h"

/*
void shittyCollisionDetection(Game *game){
	float mw= 10, mh =10;
	float mx = game->player.x, my = game->player.y;
	float bx = 300, by =500, bw = 55, bh = 55;
	if(my+mh > by && my< by+bh){
		if(mx < bx +bw && mx+mw > bx+bw){
			game->player.x = bx+bw;
			mx = bx+mw;
		}
		else if(mx+mw > bx && mx < bx){
			game->player.x = bx-mw;
			mx = bx-mw;
		}
	}

	if(mx+mw > bx && mx<bx+bw)
	{
		if(my < by +bh && my > by)
		{
			game->player.y = by+bh;
			my = by+bh;
		}
		else if(my+mh > by && my < by)
		{
			game->player.y = by-mh;
			my = by-mh;

		}
	}
}
*/



int GameLoop(SDL_Window *window, SDL_Renderer *renderer) {

	bool running = true;
	SDL_Surface *playerSurface = NULL;

	Game game;

	game.player = CreatePlayer(50,50);

	while (running)
	{
		ProcessEvents(&running, &game);

		doRender(renderer, &game);





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



	SDL_Renderer *renderer = SDL_CreateRenderer(
			window,
			-1,
			SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return renderer;
}


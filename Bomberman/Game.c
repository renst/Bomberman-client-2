#include "Game.h"

//Definition av "GameLoop" headern

typedef struct
{
	int x,y;
	char *name;
}Player;

//Flytta till inputManager
bool processEvents(bool *running, Player *player)
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch(event.type)
		{
			case SDL_QUIT:
			{
				*running = false;
			}break;
			case SDL_KEYDOWN:
			{


			}
		}
	}
	const Uint8 *state = SDL_GetKeyboardState(NULL);
	if(state[SDL_SCANCODE_A])
	{
		player->x -= 2;
	}
	if(state[SDL_SCANCODE_D])
	{
		player->x += 2;
	}
	if(state[SDL_SCANCODE_W])
	{
		player->y -= 2;
	}
	if(state[SDL_SCANCODE_S])
	{
		player->y += 2;
	}
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
	//Det här ska normal inte ligga här utan i en annan funktion som "render()" jag bara testar lite SDL funtioner
	bool running = true;

	Player player;
	player.x = 50;
	player.y = 50;
	while (running)
	{
		processEvents(&running, &player);
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


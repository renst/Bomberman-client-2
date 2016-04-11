#include "Game.h"

//Definition av "GameLoop" headern



int GameLoop(SDL_Window *window, SDL_Renderer *renderer) {
	//Det här ska normal inte ligga här utan i en annan funktion som "render()" jag bara testar lite SDL funtioner
	bool running = true;
	SDL_Event event;
	while (running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				running = false;
			}
            else if(event.type == SDL_KEYDOWN)
            {
                // What happens if a key is down..
            }
		}
		//Rensa render
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		SDL_RenderClear(renderer);

        //LevelManage(renderer);
        LevelManage(renderer, 0);

		//Visa vad som ritas
        //SDL_UpdateWindowSurface(window);

		SDL_RenderPresent(renderer);
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


#include "Graphics.h"
#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include <MacTypes.h>
//Definition av "Graphics" headern



int Graphics(SDL_Window *window, SDL_Renderer *renderer) {
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
		}
		//Rensa render
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		SDL_RenderClear(renderer);

		//Rita

		//Test med Rect
		SDL_Rect rect = { 50, 50, 200, 200 };
		SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
		SDL_RenderFillRect(renderer, &rect);

		//Visa vad som ritas
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


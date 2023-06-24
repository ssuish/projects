#include <stdio.h>
#include <SDL.h>

int main(int argc, char* args[])
{
	SDL_Init(SDL_INIT_EVERYTHING);
	printf("Game is running...\n");
	SDL_Window* window = SDL_CreateWindow("Hello World!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
	SDL_Delay(3000);
	SDL_Quit(); 
	return 0;
};
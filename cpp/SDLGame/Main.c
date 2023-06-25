#include <stdio.h>
#include <SDL.h>
#include "./Constants.h"

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
int game_is_running = FALSE;

int initialize_window(void)
{
	if (SDL_INIT_EVERYTHING != 0) {
		fprintf(stderr, "Error initializing SDL: %s\n", SDL_GetError());
		return FALSE;
	}
	
	window = SDL_CreateWindow(
		"Game Loop",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		SDL_WINDOW_BORDERLESS
	);

	if (!window) {
		fprintf(stderr, "Error creating SDL window: %s\n", SDL_GetError());
		return FALSE;
	};

	renderer = SDL_CreateRenderer(window, -1, 0);

	if (!renderer) {
		fprintf(stderr, "Error creating SDL renderer: %s\n", SDL_GetError());
		return FALSE;
	};

	return TRUE;
}

void process_input(void) {
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type) {
		case SDL_QUIT:
			game_is_running = FALSE;
			break;
		case SDL_KEYDOWN:
			if (event.key.keysym.sym == SDLK_ESCAPE)
				game_is_running = FALSE;
			break;
	}
}

void update()
{

}

void render()
{

}

void destroy_window()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}


int main(int argc, char* args[])
{
	game_is_running = initialize_window();
	printf("Game is running...");
	setup();

	while (game_is_running) {
		process_input();
		update();
		render();
	}

	destroy_window();
}
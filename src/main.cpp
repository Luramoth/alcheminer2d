// SDL
#include <SDL2/SDL.h>

// std
#include <cstdio>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main (int argc, char* args[]) {
    SDL_Window* window = nullptr;
    SDL_Surface* screenSurface = nullptr;

    // initialise SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "could not initialize sdl2: %s\n", SDL_GetError());
        return 1;
    }

    // make window
    window = SDL_CreateWindow(
            "Alcheminer",
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
            SCREEN_WIDTH, SCREEN_HEIGHT,
            SDL_WINDOW_SHOWN
            );
    if (window == nullptr) {
        fprintf(stderr, "could not create window: %s\n", SDL_GetError());
        return 1;
    }

    // """game loop"""
    screenSurface = SDL_GetWindowSurface(window);
    SDL_FillRect(screenSurface, nullptr, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_UpdateWindowSurface(window);
    SDL_Delay(2000);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
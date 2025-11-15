#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdlib.h>
#include <time.h>

#define SCREEN_WIDTH  1366
#define SCREEN_HEIGHT 768
#define NUM_BUTTERFLIES 10

typedef struct {
    SDL_Texture* texture;
    SDL_Rect rect;
    int vx, vy;
} Butterfly;

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);
    SDL_Window* window = SDL_CreateWindow("Butterfly Animation", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_Surface* bgSurface = IMG_Load("background.jpg"); // Your full image as background
    SDL_Texture* background = SDL_CreateTextureFromSurface(renderer, bgSurface);
    SDL_FreeSurface(bgSurface);

    Butterfly butterflies[NUM_BUTTERFLIES];
    srand(time(NULL));

    // Load butterfly textures and initialize positions
    for (int i = 0; i < NUM_BUTTERFLIES; i++) {
        char filename[50];
        sprintf(filename, "butterfly%d.png", (i % 3) + 1); // 3 example butterfly sprites
        SDL_Surface* surface = IMG_Load(filename);
        butterflies[i].texture = SDL_CreateTextureFromSurface(renderer, surface);
        butterflies[i].rect.x = 200 + rand() % 100;
        butterflies[i].rect.y = 200 + rand() % 100;
        butterflies[i].rect.w = surface->w;
        butterflies[i].rect.h = surface->h;
        butterflies[i].vx = 1 + rand() % 3;
        butterflies[i].vy = -1 + rand() % 3;
        SDL_FreeSurface(surface);
    }

    int running = 1;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = 0;
        }

        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, background, NULL, NULL);

        for (int i = 0; i < NUM_BUTTERFLIES; i++) {
            butterflies[i].rect.x += butterflies[i].vx;
            butterflies[i].rect.y += butterflies[i].vy;
            SDL_RenderCopy(renderer, butterflies[i].texture, NULL, &butterflies[i].rect);
        }

        SDL_RenderPresent(renderer);
        SDL_Delay(1000 / 60); // 60 FPS
    }

    for (int i = 0; i < NUM_BUTTERFLIES; i++) {
        SDL_DestroyTexture(butterflies[i].texture);
    }
    SDL_DestroyTexture(background);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
    return 0;
}

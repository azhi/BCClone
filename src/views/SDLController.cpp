#include "SDLController.h"
#include <stdio.h>
#include <stdlib.h>

SDLController::SDLController(unsigned screenWidth, unsigned screenHeigth)
{
  init(screenWidth, screenHeigth);
}

SDLController::~SDLController()
{
}

void SDLController::init(unsigned screenWidth, unsigned screenHeigth)
{
  if ( SDL_Init( SDL_INIT_VIDEO | SDL_INIT_EVENTTHREAD ) < 0 )
  {
    fprintf(stderr, "Unable to init SDL: %s", SDL_GetError());
    exit(EXIT_FAILURE);
  }
  
  screen = SDL_SetVideoMode(screenWidth, screenHeigth, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  if ( !screen )
  {
    fprintf(stderr, "Unable to set videomode: %s", SDL_GetError());
    exit(EXIT_FAILURE);
  }
  
  SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 255, 255, 255));
  SDL_Flip(screen);
}

SDL_Event SDLController::getEvent()
{
  SDL_Event event;
  SDL_PollEvent(&event);
  return event;
}

#ifndef SDL_CONTROLLER_H
#define SDL_CONTROLLER_H

#include <SDL/SDL.h>

class SDLController
{
public:
  SDLController(unsigned screenWidth, unsigned screenHeigth);
  ~SDLController();
  void init(unsigned screenWidth, unsigned screenHeigth);
  SDL_Event getEvent();

private:
  SDL_Surface* screen;
};

#endif // SDL_CONTROLLER_H

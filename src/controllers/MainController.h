#ifndef MAIN_CONTROLLER_H
#define MAIN_CONTROLLER_H

#include "../views/SDLController.h"

class MainController
{
public:
  MainController();
  ~MainController();
  void mainLoop();

private:
  SDLController* sdlController;
};

#endif // SDL_CONTROLLER_H

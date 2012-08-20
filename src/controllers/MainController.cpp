#include "MainController.h"

MainController::MainController()
{
    sdlController = new SDLController(1024, 768);
}

MainController::~MainController()
{
    delete sdlController;
}

void MainController::mainLoop()
{
    bool quit = false;
    while ( !quit )
    {
        SDL_Event event = sdlController->getEvent();
        switch ( event.type )
        {
            case SDL_QUIT:
                quit = true;
                break;
        }
    }
}

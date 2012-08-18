#include "controllers/MainController.h"

int main(int argc, char* argv[])
{
  MainController* mc = new MainController();
  mc->mainLoop();
  delete mc;
}

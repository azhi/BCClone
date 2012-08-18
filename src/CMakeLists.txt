cmake_minimum_required (VERSION 2.6)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "-std=c++0x")

set (PROJECT
  BCClone)

set (SOURCES
    main.cpp

    models/Object.h
    models/LevelObject.h
    models/Tank.h
    models/Bullet.h
    models/Bonus.h
    models/Level.h
    models/Scene.h

    views/SDLController.h
    views/SDLController.cpp

    controllers/MainController.h
    controllers/MainController.cpp
)

set (EXECUTABLE_OUTPUT_PATH ../bin)

find_package(SDL REQUIRED)

if (NOT SDL_FOUND)
    message(FATAL_ERROR "SDL not found!")
endif (NOT SDL_FOUND)

if (WIN32)
    set(CMAKE_EXE_LINKER_FLAGS "-mwindows -static-libgcc -static-libstdc++")
endif (WIN32)

add_executable (${PROJECT} ${SOURCES})
target_link_libraries(${PROJECT} ${SDL_LIBRARY})

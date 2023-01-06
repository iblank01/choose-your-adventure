cmake_minimum_required(VERSION 3.24)
project(choose_your_adventure)

set(CMAKE_CXX_STANDARD 23)

include_directories(.)

add_executable(choose_your_adventure
        main.cpp main.h
        menuSelection/optionPlayMenu.cpp menuSelection/optionPlayMenu.h
        menuSelection/optionRaceMenu.cpp menuSelection/optionRaceMenu.h
        menuSelection/optionSettingsMenu.cpp menuSelection/optionSettingsMenu.h
        gameStart/areaDarkForest.cpp gameStart/areaDarkForest.h)
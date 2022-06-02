cmake_minimum_required(VERSION 3.22)
project(myHandTeamConsole)

set(CMAKE_CXX_STANDARD 14)

add_executable(myHandTeamConsole source/main.cpp source/Joueur.cpp prototype/Joueur.h source/Equipe.cpp prototype/Equipe.h)

cmake_minimum_required(VERSION 3.10)
project(GameProject)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/game/Game.cpp
    src/entities/Player.cpp
    src/utils/Utils.cpp)
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)

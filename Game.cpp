#include "Game.h"
#include "entities/Player.h"

Game::Game() {
    window.create(sf::VideoMode(800, 600), "Game Title");
}

void Game::run() {
    while (window.isOpen()) {
        handleInput();
        update(clock.restart().asSeconds());
        render();
    }
}

void Game::handleInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void Game::update(float dt) {
    // Логика обновления
}

void Game::render() {
    window.clear();
    // Отрисовка объектов
    window.display();
}

#pragma once

class Game {
private:
    sf::RenderWindow window;
    sf::Clock clock;
    
public:
    Game();
    void run();
    void handleInput();
    void update(float dt);
    void render();
};

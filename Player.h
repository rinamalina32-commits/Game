#pragma once

class Player {
private:
    sf::Sprite sprite;
    sf::Vector2f position;
    
public:
    Player();
    void update(float dt);
    void render(sf::RenderTarget& target);
};

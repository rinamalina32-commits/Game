#include "Utils.h"

sf::Texture Utils::loadTexture(const std::string& path) {
    sf::Texture texture;
    texture.loadFromFile(path);
    return texture;
}

sf::Font Utils::loadFont(const std::string& path) {
    sf::Font font;
    font.loadFromFile(path);
    return font;
}

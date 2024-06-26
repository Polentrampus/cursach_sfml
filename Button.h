#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Button {
public:
    Button(sf::Vector2f location, const sf::Texture& normal, const sf::Texture& clicked);
    bool checkClick(sf::Vector2i mousePos = sf::Vector2i(-1, -1));
    sf::Sprite* getSprite();

private:
    sf::Sprite normal;
    sf::Sprite clicked;
    sf::Sprite* currentSpr;
    bool current = false;//текущее состояние
    void setState(bool);//установить состояние
};
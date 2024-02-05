/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Text
*/

#include "Text.hpp"

Text::Text(sf::Font *font, int x, int y, int size, std::string str, sf::Color color, int moduleId) 
    : _moduleId(moduleId)
{
    _text.setFont(*font);
    _text.setCharacterSize(size);
    _text.setString(str);
    _text.setPosition(x, y);
    _text.setFillColor(color);
}

std::string Text::getString() const {
    return _text.getString().toAnsiString();
}

void Text::draw(sf::RenderWindow &window) const {
    window.draw(_text);
}

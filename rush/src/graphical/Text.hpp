/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Text
*/

#pragma once

#include <SFML/Graphics/Text.hpp>

class Text {
    public :
        Text(sf::Font *font, int x, int y, int size, std::string str, sf::Color color);
        ~Text() = default;
        sf::FloatRect getGlobalBounds() const {
            return _text.getGlobalBounds();
        }
        std::string getString() const;
        void draw(sf::RenderWindow &window) const;
        int getModuleId() const {
            return _moduleId;
        }
        void Text::setModuleId(int id) {
            _moduleId = id;
        }

    private:
        sf::Text _text;
        int _moduleId;
};

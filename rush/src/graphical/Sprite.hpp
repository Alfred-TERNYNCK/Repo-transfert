/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Sprite
*/

#pragma once

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <string>

class Sprite {
    public :
        Sprite(std::string file, int x, int y);
        ~Sprite() = default;
    private:
        sf::Sprite _sprite;
        sf::Texture _texture;
};

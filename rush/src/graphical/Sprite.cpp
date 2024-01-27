/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Sprite
*/

#include "Sprite.hpp"

Sprite::Sprite(std::string file, int x, int y)
{
    _texture.loadFromFile(file);
    _sprite.setTexture(_texture);
    _sprite.setPosition(x, y);
}

/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** IMonitorModule
*/

#pragma once

#include <ncurses.h>
#include <SFML/Graphics.hpp>
#include <string>

struct ModuleBox {
    int startX;
    int startY;
    int endX;
    int endY;
};

namespace Krell {
    class IModule {
        public:
            virtual ~IModule() = default;
            virtual void refreshData() = 0;
            virtual void drawText(ModuleBox modBox) = 0;
            virtual void drawGraphical(sf::RenderWindow &window, const sf::Font &font, ModuleBox box) = 0;
    };
}

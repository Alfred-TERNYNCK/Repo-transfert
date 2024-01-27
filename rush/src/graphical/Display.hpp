/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Display
*/

#pragma once

#include <SFML/Graphics.hpp>
#include "../../include/ADisplay.hpp"
#include "Text.hpp"
#include "IModule.hpp"

namespace Krell {
    namespace Graphical {
        class Display : public ADisplay {
        public:
            Display(std::vector<IModule *> &modules);
            ~Display() override;
            void drawModules() override;
            void displayLoop() override;
            void handleEvents();
            void drawAvailableModules();
            void toggleModule(int moduleId);

        private:
            std::vector<IModule *> _allModules;
            std::vector<IModule *> _displayedModules; // Modules actuellement affichés
            int _currentPage;
            sf::RenderWindow _window;
            sf::Font _font;
            sf::RectangleShape _bar;
            std::vector<Text> _moduleTexts;
        };
    }
}

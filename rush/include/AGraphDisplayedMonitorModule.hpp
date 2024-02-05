/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** MonitorModuleGraph
*/

#pragma once

#include <list>
#include "AModule.hpp"

namespace Krell {
    class AGraphDisplayedMonitorModule : public AModule<std::vector<double>> {
        public:
            explicit AGraphDisplayedMonitorModule(const std::string &name) : AModule(name) {}
            void drawText(ModuleBox box) final {}
            void drawGraphical(sf::RenderWindow &window, const sf::Font &font, ModuleBox box) {}
    };
}

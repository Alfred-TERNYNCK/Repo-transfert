/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Utils
*/

#pragma once

#include <vector>
#include "../include/IModule.hpp"

namespace Krell {
    class DisplayItem {
        public:
            IModule &module;
            ModuleBox *box;
    };

    class Utils {
        public:
            static std::vector<DisplayItem> placeModules(std::vector<IModule *> &all_modules, int sizeX, int sizeY, int page);
    };
}

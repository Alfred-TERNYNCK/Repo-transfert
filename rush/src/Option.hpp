/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Option
*/

#pragma once

#include <vector>
#include "../include/IModule.hpp"

namespace Krell {
    class Option {
        public:
            enum DisplayMode {
                TEXT,
                GRAPHICAL,
                NONE
            };
            static void help();
            static DisplayMode check_options(int ac, char **av, std::vector<IModule *> &all_modules);
    };
}

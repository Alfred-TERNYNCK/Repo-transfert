/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** MonitorDisplay
*/

#pragma once

#include <vector>
#include "IDisplay.hpp"
#include "IModule.hpp"

namespace Krell {
    class ADisplay : public IDisplay {
        public:
            ADisplay(std::vector<IModule *> &modules) : modules(modules) {};
            bool isOpen() override {
                return this->open;
            }
        protected:
            bool open = true;
            std::vector<IModule *> modules = std::vector<IModule *>();
    };
}

/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** IMonitorDisplay
*/

#pragma once

#include "IModule.hpp"

namespace Krell {
    class IDisplay {
        public:
            virtual ~IDisplay() = default;
            virtual void drawModules() = 0;
            virtual void displayLoop() = 0;
            virtual bool isOpen() = 0;
    };
}

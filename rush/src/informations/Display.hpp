/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Display
*/

#pragma once

#include "../../include/ADisplay.hpp"

namespace Krell {
    namespace Text {
        class Display : public ADisplay {
            public:
                Display(std::vector<IModule *> &all_modules);
                ~Display() override;
                void drawModules() override;
                void displayLoop() override;
                bool needToDraw();
            private:
                int seconds = 0;
        };
    }
}

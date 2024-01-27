/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Memory
*/

#pragma once

#include <iostream>
#include <vector>
#include "../../include/AModule.hpp"

typedef struct {
    std::vector<double> physicalMemoryUsageGraph;
    std::vector<double> swapMemoryUsageGraph;
    double usedPhysicalMemory;
    double usedSwapMemory;
    double physicalMemoryMax;
    double swapMemoryMax;
} MemoryData;

namespace Krell {
    class Memory : public AModule<MemoryData> {
            std::size_t plotSize = 100;
            int refreshCount = 0;
            sf::Text *text = nullptr;
            sf::Text *memory = nullptr;
            sf::RectangleShape *rectangle = nullptr;
            sf::RectangleShape *line = nullptr;

            void plotMemoryGraphFor(std::vector<double> &memoryUsageGraph, double toPlot) const;
            WINDOW *win = nullptr;
        public:
            Memory();
            ~Memory() override = default;
            void refreshData() final;
            void drawText(ModuleBox modBox) final;
            void drawGraphical(sf::RenderWindow &window, const sf::Font &font, ModuleBox box) final;
            int getId() const;
            std::string getName() const;
        private:
            void drawGraphicLines(sf::RenderWindow &window, ModuleBox &box);
    };
}

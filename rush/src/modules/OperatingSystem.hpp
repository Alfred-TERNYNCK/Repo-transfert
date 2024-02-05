/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Os
*/

#pragma once

#include <string>
#include "../../include/AModule.hpp"
#include "../../include/AKeyValueDisplayedMonitorModule.hpp"

namespace Krell {
    class OperatingSystem : public AKeyValueDisplayedMonitorModule {
        public:
            OperatingSystem();
            ~OperatingSystem() override = default;
            void refreshData() override;
            int getId() const; // Ajoutez cette méthode
            std::string getName() const; // Ajoutez cette méthode
    };
}

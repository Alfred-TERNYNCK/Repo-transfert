/*
** EPITECH PROJECT, 2024
** B-PDG-300-BAR-3-1-PDGRUSH3-etienne.namur
** File description:
** CPU
*/

#pragma once

#include <string>
#include "../../include/AModule.hpp"
#include "../../include/AKeyValueDisplayedMonitorModule.hpp"

namespace Krell {
    class CPU : public AKeyValueDisplayedMonitorModule {
        public:
            CPU();
            ~CPU() override = default;
            void refreshData() override;
            int getId() const; // Ajoutez cette méthode
            std::string getName() const; // Ajoutez cette méthode
    };
}

/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** HostNames
*/

#pragma once

#include "../../include/AKeyValueDisplayedMonitorModule.hpp"

namespace Krell {
    class HostNames : public AKeyValueDisplayedMonitorModule {
        public:
            HostNames();
            ~HostNames() override = default;
            void refreshData() override;
            int getId() const; // Ajoutez cette méthode
            std::string getName() const; // Ajoutez cette méthode
    };
}
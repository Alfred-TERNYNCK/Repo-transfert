/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** DateTime
*/

#pragma once

#include "../../include/AKeyValueDisplayedMonitorModule.hpp"

namespace Krell {
    class DateTime : public AKeyValueDisplayedMonitorModule {
        public:
            DateTime();
            ~DateTime() override = default;
            void refreshData() override;
            int getId() const; // Ajoutez cette méthode
            std::string getName() const; // Ajoutez cette méthode
    };
}

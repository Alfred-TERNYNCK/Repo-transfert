/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** MonitorModule
*/

#pragma once

#include <utility>
#include "IModule.hpp"

namespace Krell {
    template<typename Type>
    class AModule : public IModule {
        public:
            explicit AModule(std::string name) : name(std::move(name)) {};
        protected:
            const std::string name;
            Type data;
    };
}

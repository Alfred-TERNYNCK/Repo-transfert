/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** OrComponent.hpp
*/

#pragma once

#include "IComponent.hpp"

namespace nts {
    class OrComponent : public IComponent {
    public:
        OrComponent();
        ~OrComponent();
        Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, IComponent &other, std::size_t otherPin) override;
        void dump() const override;
    };
}
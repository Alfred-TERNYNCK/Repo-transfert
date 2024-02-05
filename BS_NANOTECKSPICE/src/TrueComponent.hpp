/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** TrueComponent.hpp
*/

#pragma once

#include "IComponent.hpp"

namespace nts {
    class TrueComponent : public IComponent {
    public:
        TrueComponent();
        ~TrueComponent();
        Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, IComponent &other, std::size_t otherPin) override;
        void dump() const override;
    };
}
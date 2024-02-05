/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** 4081.hpp
*/

#pragma once
#include "IComponent.hpp"

namespace nts {
    class _4081 : public IComponent {
    public:
        _4081();
        ~_4081();
        Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, IComponent &other, std::size_t otherPin) override;
        void dump() const override;
    };
}

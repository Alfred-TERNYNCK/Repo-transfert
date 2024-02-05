/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** IComponent.hpp
*/

#pragma once
#include <cstddef>
#include <memory>
#include "Tristate.hpp"

namespace nts {
    class IComponent {
    public:
        virtual ~IComponent() = default;
        virtual Tristate compute(std::size_t pin = 1) = 0;
        virtual void setLink(std::size_t pin, IComponent &other, std::size_t otherPin) = 0;
        virtual void dump() const = 0;
    };
}

/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** OrComponent.cpp
*/

#include <iostream>
#include "OrComponent.hpp"

nts::OrComponent::OrComponent()
{
}

nts::OrComponent::~OrComponent()
{
}

nts::Tristate nts::OrComponent::compute(std::size_t pin)
{
    (void)pin;
    return nts::Tristate::UNDEFINED;
}

void nts::OrComponent::setLink(std::size_t pin, IComponent &other, std::size_t otherPin)
{
    (void)pin;
    (void)other;
    (void)otherPin;
}

void nts::OrComponent::dump() const
{
    std::cout << "OrComponent" << std::endl;
}

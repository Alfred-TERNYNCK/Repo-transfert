/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** AndComponent.cpp
*/

#include <iostream>
#include "AndComponent.hpp"

nts::AndComponent::AndComponent()
{
}

nts::AndComponent::~AndComponent()
{
}

nts::Tristate nts::AndComponent::compute(std::size_t pin)
{
    (void)pin;
    return nts::Tristate::UNDEFINED;
}

void nts::AndComponent::setLink(std::size_t pin, IComponent &other, std::size_t otherPin)
{
    (void)pin;
    (void)other;
    (void)otherPin;
}

void nts::AndComponent::dump() const
{
    std::cout << "AndComponent" << std::endl;
}

/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** NotComponent.cpp
*/

#include <iostream>
#include "NotComponent.hpp"

nts::NotComponent::NotComponent()
{
}

nts::NotComponent::~NotComponent()
{
}

nts::Tristate nts::NotComponent::compute(std::size_t pin)
{
    (void)pin;
    return nts::Tristate::UNDEFINED;
}

void nts::NotComponent::setLink(std::size_t pin, IComponent &other, std::size_t otherPin)
{
    (void)pin;
    (void)other;
    (void)otherPin;
}

void nts::NotComponent::dump() const
{
    std::cout << "NotComponent" << std::endl;
}

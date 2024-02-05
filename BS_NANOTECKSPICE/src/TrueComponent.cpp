/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** TrueComponent.cpp
*/

#include <iostream>
#include "TrueComponent.hpp"

nts::TrueComponent::TrueComponent()
{
}

nts::TrueComponent::~TrueComponent()
{
}

nts::Tristate nts::TrueComponent::compute(std::size_t pin)
{
    (void)pin;
    return nts::Tristate::TRUE;
}

void nts::TrueComponent::setLink(std::size_t pin, IComponent &other, std::size_t otherPin)
{
    (void)pin;
    (void)other;
    (void)otherPin;
}

void nts::TrueComponent::dump() const
{
    std::cout << "TrueComponent" << std::endl;
}


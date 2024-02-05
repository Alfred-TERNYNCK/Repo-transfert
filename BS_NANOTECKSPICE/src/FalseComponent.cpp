/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** FalseComponent.cpp
*/

#include <iostream>
#include "FalseComponent.hpp"

nts::FalseComponent::FalseComponent()
{
}

nts::FalseComponent::~FalseComponent()
{
}

nts::Tristate nts::FalseComponent::compute(std::size_t pin)
{
    (void)pin;
    return nts::Tristate::FALSE;
}

void nts::FalseComponent::setLink(std::size_t pin, IComponent &other, std::size_t otherPin)
{
    (void)pin;
    (void)other;
    (void)otherPin;
}

void nts::FalseComponent::dump() const
{
    std::cout << "FalseComponent" << std::endl;
}

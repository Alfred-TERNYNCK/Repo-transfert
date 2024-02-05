/*
** EPITECH PROJECT, 2024
** BS_NANOTECKSPICE
** File description:
** Tristate.hpp
*/

#pragma once

namespace nts {
    enum Tristate {
        UNDEFINED = (-true),
        TRUE = true,
        FALSE = false
    };
}
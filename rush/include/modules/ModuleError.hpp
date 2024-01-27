/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Errors
*/

#pragma once

#include <string>
#include <exception>
#include <utility>

class ModuleError : std::exception {
    public:
        explicit ModuleError(std::string what) : whatValue(std::move(what)) {}
        const char *what() const noexcept override {
            return this->whatValue.c_str();
        }
    private:
        const std::string whatValue;
};

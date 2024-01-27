/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Main
*/

#include "graphical/Display.hpp"
#include "./informations/Display.hpp"
#include "Option.hpp"

int main(int argc, char **argv)
{
    std::vector<Krell::IModule *> modules = std::vector<Krell::IModule *>();
    Krell::Option::DisplayMode mode = Krell::Option::check_options(argc, argv, modules);

    if (mode == Krell::Option::TEXT) {
        Krell::Text::Display t(modules);
        t.displayLoop();
    } else if (mode == Krell::Option::GRAPHICAL) {
        Krell::Graphical::Display g(modules);
        g.displayLoop();
    }
    return 0;
}
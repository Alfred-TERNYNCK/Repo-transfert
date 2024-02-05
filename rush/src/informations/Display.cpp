/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Display
*/

#include <ctime>
#include <ncurses.h>
#include "Display.hpp"
#include "../Utils.hpp"

Krell::Text::Display::Display(std::vector<IModule *> &modules) : ADisplay(modules)
{
    initscr();
    noecho();
    nodelay(stdscr, TRUE);
    keypad(stdscr, true);
    curs_set(false);
}

Krell::Text::Display::~Display()
{
    endwin();
}

bool Krell::Text::Display::needToDraw()
{
    std::time_t currentTime = std::time(nullptr);
    std::tm *timeStruct = std::localtime(&currentTime);
    bool result = timeStruct->tm_sec != this->seconds;

    this->seconds = timeStruct->tm_sec;
    return result;
}

void Krell::Text::Display::displayLoop()
{
    int key = 0;

    while (key != 'q') {
        key = getch();
        if (needToDraw()) {
            this->drawModules();
        }
    }
    this->open = false;
}

void Krell::Text::Display::drawModules()
{
    auto placement = Utils::placeModules(this->modules, getmaxx(stdscr), getmaxy(stdscr), 1);

    for (auto &place: placement) {
        place.module.drawText(*place.box);
    }
}

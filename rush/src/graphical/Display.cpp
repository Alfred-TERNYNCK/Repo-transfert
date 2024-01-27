/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Display
*/

#include "Display.hpp"
#include "../Utils.hpp"
#include <iostream>
#include <SFML/Window/VideoMode.hpp>
#include "Text.hpp"


Krell::Graphical::Display::Display(std::vector<IModule *> &modules) : ADisplay(modules), _window(sf::RenderWindow(sf::VideoMode(1080, 720), "MyGKrellM")), _font(sf::Font())
{
    this->_window.setFramerateLimit(30);
    this->_font.loadFromFile("assets/font.ttf");
}

void Krell::Graphical::Display::drawModules() {
    std::vector<DisplayItem> list = Utils::placeModules(this->modules, 1080, 620, _currentPage);
    for (auto &item : list) {
        item.module.drawGraphical(this->_window, this->_font, *item.box);
        delete item.box;
    }
}


void Krell::Graphical::Display::displayLoop() {
    while (this->isOpen()) {
        this->_window.clear();
        this->handleEvents();
        this->drawAvailableModules();  // all modules 
        this->drawModules();           // current modules
        this->_window.draw(this->_bar);
        this->_window.display();
    }
}


void Krell::Graphical::Display::handleEvents() {
    sf::Event event;
    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            _window.close();

        if (event.type == sf::Event::MouseButtonPressed) {
            if (event.mouseButton.button == sf::Mouse::Left) {
                sf::Vector2i mousePos = sf::Mouse::getPosition(_window);

                // Vérifiez si un texte de module a été cliqué
                for (Text &text : _moduleTexts) {
                    if (text.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                        // Obtenez l'ID du module associé au texte et basculez son état
                        int moduleId = text.getModuleId();
                        toggleModule(moduleId);
                    }
                }
            }
        }
    }
}



Krell::Graphical::Display::~Display()
{
    this->_window.close();
}

void Krell::Graphical::Display::drawAvailableModules() {
    std::vector<DisplayItem> availableModulesList = Utils::placeModules(_allModules, 1080, 100, _currentPage);

    for (size_t i = 0; i < availableModulesList.size(); ++i) {
        auto &item = availableModulesList[i];

        // Dessinez le module graphiquement
        item.module.drawGraphical(_window, _font, *item.box);

        // Créez un objet Text en associant l'ID du module correspondant
        Text moduleText(&_font, item.box->getPosition().x, item.box->getPosition().y, 20, item.module.getName(), sf::Color::White, i);
        moduleText.setModuleId(i);

        // Ajoutez ce texte à la liste des textes de module
        _moduleTexts.push_back(moduleText);

        // Nettoyez la mémoire du box
        delete item.box;
    }
}


void Krell::Graphical::Display::toggleModule(int moduleId) {
    auto it = std::find_if(_allModules.begin(), _allModules.end(),
        [moduleId](const IModule* module) {
            return module->getId() == moduleId;
        });

    if (it != _allModules.end()) {
        // Le module a été trouvé
        if (std::find(_displayedModules.begin(), _displayedModules.end(), *it) != _displayedModules.end()) {
            // Le module est actuellement affiché, donc le retirer
            _displayedModules.erase(std::remove(_displayedModules.begin(), _displayedModules.end(), *it), _displayedModules.end());
        } else {
            // Le module n'est pas actuellement affiché, donc l'ajouter
            _displayedModules.push_back(*it);
        }
    }
}

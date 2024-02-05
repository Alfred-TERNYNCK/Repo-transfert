/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Option
*/

#include <cstring>
#include <iostream>
#include <map>
#include "Option.hpp"
#include "modules/Battery.hpp"
#include "modules/CPU.hpp"
#include "modules/HostNames.hpp"
#include "modules/OperatingSystem.hpp"
#include "modules/DateTime.hpp"
#include "modules/Memory.hpp"

void Krell::Option::help()
{
    std::cout << "USAGE:" << std::endl;
    std::cout << "./MyGKrellm [OPTIONS]" << std::endl;
    std::cout << "OPTIONS:" << std::endl;
    std::cout << " -g | --graphical: Display the graphical window using the SFML library" << std::endl;
    std::cout << " -t | --text: Display the terminal window using ncurses library" << std::endl;
    std::cout << " -h | --help: Print the helper and quit." << std::endl;
    std::cout << "modules:" << std::endl;
    std::cout << "--hostnames: Display username and hostname" << std::endl;
    std::cout << "--os: Display operating system name and version" << std::endl;
    std::cout << "--date: Display date and time" << std::endl;
    std::cout << "--memory: Display physical and swap memory usage" << std::endl;
    std::cout << "--cpu: Display cpu informations" << std::endl;
    std::cout << "--battery: Display battery informations" << std::endl;
}

Krell::Option::DisplayMode Krell::Option::check_options(int ac, char **av, std::vector<IModule *> &modules)
{
    Option::DisplayMode mode = TEXT;
    std::map<std::string, IModule*> map_module = std::map<std::string, IModule *>();
    map_module["--date"] = new DateTime();
    map_module["--hostnames"] = new HostNames();
    map_module["--memory"] = new Memory();
    map_module["--os"] = new OperatingSystem();
    map_module["--cpu"] = new CPU();
    map_module["--battery"] = new Battery();

    for (int i = 0; i < ac; i++) {
        if (strcmp("--text", av[i]) == 0 || strcmp("-t", av[i]) == 0) {
            mode = TEXT;
        } else if (strcmp("--graphical", av[i]) == 0 || strcmp("-g", av[i]) == 0) {
            mode = GRAPHICAL;
        } else if (strcmp("--help", av[i]) == 0 || strcmp("-h", av[i]) == 0) {
            help();
            return NONE;
        }
        if (map_module[av[i]] != nullptr) {
            modules.push_back(map_module[av[i]]);
            map_module[av[i]] = nullptr;
        }
    }
    if (modules.empty()) {
        modules.push_back(new HostNames());
        modules.push_back(new OperatingSystem());
        modules.push_back(new DateTime());
        modules.push_back(new Memory());
        modules.push_back(new CPU());
        modules.push_back(new Battery());
    }
    return mode;
}

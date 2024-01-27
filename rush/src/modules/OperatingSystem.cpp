/*
** EPITECH PROJECT, 2024
** rush3_experiments
** File description:
** Os
*/

#include <sys/utsname.h>
#include "OperatingSystem.hpp"
#include "../../include/modules/ModuleError.hpp"

Krell::OperatingSystem::OperatingSystem() : AKeyValueDisplayedMonitorModule("Operating System")
{

}

void Krell::OperatingSystem::refreshData()
{
    struct utsname info{};

    if (uname(&info) == -1)
        throw ModuleError("Cannot get operating system info.");

    this->data.clear();
    this->data.insert({"OS Name", info.sysname});
    this->data.insert({"Kernel version", info.release});
}

int Krell::OperatingSystem::getId() const
{
    return 0;
}

std::string Krell::OperatingSystem::getName() const
{
    return "Operating System";
}